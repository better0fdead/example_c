#include "../headers/nums.h"
#include "../headers/array.h"

float find_average(const int *pb_src, const int *pe_src)
{
    float n = 0;
    int i = 0;
    float sum = 0;
    while ((pb_src + i) < pe_src)
    {
        n++;
        sum = sum + *(pb_src + i);
        i++;
    }
    return sum / n; 
}

int count_nums(char *name, int *n)
{
    int a;
    int flag = SUCCES;
    FILE *f;
    f = fopen(name, "r");
    if (f == NULL)
        flag = FAIL;
    if (flag != FAIL)
    {
        while (fscanf(f, "%d", &a) == 1)
        {
            *n += 1;
        }
        fclose(f);
        if (*n == 0)
        {
            flag = FAIL;
        }
    }
    return flag;
}

int read_nums(char *name, int *pb_src, int *pe_src)
{
    FILE *f;
    int flag = SUCCES;
    f = fopen(name, "r");
    if (f == NULL)
    {
        flag = FAIL;
    }
    if (flag != FAIL)
    {
        rewind(f);
        for (int *cur = pb_src; cur < pe_src; cur++)
        {
            fscanf(f, "%d", cur);
        }
        fclose(f);
    }
    return flag;
}

int key(const int *pb_src, const int *pe_src, int **pb_dst, int **pe_dst)
{
    int i = 0;
    int flag = SUCCES;
    float sred = find_average(pb_src, pe_src);
    int p = 0;
    while ((pb_src + i) < pe_src)
    {
        if (*(pb_src + i) > sred)
        {
            p++;
        }
        i++;
    }
    if (p == 0)
    {
        flag = FAIL;
    }
    if (flag != FAIL)
    {
        create_array(pb_dst, p, pe_dst);
        i = 0;
        p = 0;
        int *cur = *pb_dst;
        while ((pb_src + i) < pe_src)
        {
            if (*(pb_src + i) > sred)
            {
                *(cur) = *(pb_src + i);
                cur++;
            }
            i++;
        }
    }
    return flag;
}