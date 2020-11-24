#include "../headers/array.h"

int create_array(int **pb, int n, int **pe)
{
    int flag = SUCCES;
    *pb = malloc(n * sizeof(int));
    *pe = *pb + n;

    if (*pb)
        flag = SUCCES;
    else
        flag = FAIL;

    return flag;
}

int delete_array(int *array)
{
    int flag = SUCCES;
    if (array)
    {
        free(array);
        flag = SUCCES;
    }
    else
        flag = FAIL;
    
    return flag;
}

int output_arr(int *beg, int *end, char *name)
{
    FILE *f;
    int flag = SUCCES;
    f = fopen(name, "w");
    if (f == NULL)
        flag = FAIL;
    if (flag == SUCCES)
    {
        for (int *cur = beg; cur < end; cur++)
        {
            fprintf(f, "%d ", *cur);
        }
        fclose(f);      
    }
    return flag;
}