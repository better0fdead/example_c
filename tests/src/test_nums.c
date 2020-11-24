#include "../../headers/nums.h"

void pos_count_nums()
{
    int n = 0; 
    int wrong = 1;
    count_nums("./tests/src/test.txt", &n);
    if (n == 10)
    {
        wrong = 0;
    }
    printf("%s: %s\n", __func__, wrong ? "FAILED" : "OK");
}

void no_file()
{
    int n;
    int wrong = 0;
    wrong = count_nums("test23.txt", &n);
    if (wrong != 0)
    {
        wrong = 1;
    }
    printf("%s: %s\n", __func__, wrong ? "OK" : "FAILED");
}

void void_file()
{
    int n; 
    int wrong = 0;
    wrong = count_nums("test1.txt", &n);
    printf("%s: %s\n", __func__, wrong ? "OK" : "FAILED");
}