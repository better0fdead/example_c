#ifndef ARRAY_H
#define ARRAY_H

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "string.h"

#define SUCCES 0
#define FAIL 3
#define FILEER 2

int create_array(int **pb_src, int n, int **pe_src);
int delete_array(int *array);
int output_arr(int *beg, int *end, char *name);

#endif
