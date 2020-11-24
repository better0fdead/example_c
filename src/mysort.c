#include "../headers/mysort.h"

int comp(const void *i, const void *j)
{
    int *p = (int*)i;
    int *b = (int*)j;
    return *p - *b;
}

void swap(void *a, void *b, size_t n) 
{
    if (a == b) 
    {
        return;
    }

    size_t i;
    char *x = (char *)a,
    *y = (char *)b;

    for (i = 0; i < n; i++) 
    {
        *x ^= *y;
        *y ^= *x;
        *x ^= *y;
        x++;
        y++;
    }
}

void mysort(void *base, size_t num, size_t size, int (*compare)(const void *, const void *))
{
    size_t ed = 1;
    size_t barier = num;
    size_t bar = 0;
    for (size_t i = 0; i < num; i++) 
    { 
        bar = 0;
        for (size_t j = 0 ; j < barier - 1; j++) 
        { 
            if (compare((char*)base + j * size, (char*)base + (j + ed) * size) > 0) 
            {           
                bar = j;
                swap((char*)base + j * size, (char*)base + (j + ed) * size, size);
            }
        }
        bar++;
        barier = bar;
    }
}