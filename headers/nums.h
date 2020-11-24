#ifndef NUMS_H
#define NUMS_H

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "string.h"

#define SUCCES 0
#define FAIL 3
#define FILEER 2

int count_nums(char *name, int *n);
int read_nums(char *name, int *pb_src, int *pe_src);
int key(const int *pb_src, const int *pe_src, int **pb_dst, int **pe_dst);

#endif