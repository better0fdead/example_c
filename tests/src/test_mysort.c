#include "../../headers/mysort.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "string.h"
//#include "../headers/test_mysort.h"
void pos_test()
{
    int n = 10;
    int wrong = 10;
    int mas[10] = { 9, 4, 2, 6, 7, 1, 3, 5, 8, 10 };
    int mas2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    mysort(mas, n, sizeof(int), comp);
    for (int i = 0; i < n; i++)
    {
        if (mas[i] == mas2[i])
        {
            wrong--;
        }
    }
    printf("%s: %s\n", __func__, wrong ? "FAILED" : "OK");
}

void one_el_test()
{
    int n = 1;
    int mas3[1] = { 1 };
    int mas4[1] = { 1 };
    int wrong = 1;
    mysort(mas3, n, sizeof(int), comp);
    for (int i = 0; i < n; i++)
    {
        if (mas3[i] == mas4[i])
        {
            wrong--;
        }
    }
    printf("%s: %s\n", __func__, wrong ? "FAILED" : "OK");
}

void neg_numbers()
{
    int n = 5;
    int mas3[5] = { 1, -5, 0, 3, 4 };
    int mas4[5] = { -5, 0, 1, 3, 4 };
    int wrong = n;
    mysort(mas3, n, sizeof(int), comp);
    for (int i = 0; i < n; i++)
    {
        if (mas3[i] == mas4[i])
        {
            wrong--;
        }
    }
    printf("%s: %s\n", __func__, wrong ? "FAILED" : "OK");
}