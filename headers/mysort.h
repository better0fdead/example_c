#ifndef MYSORT_H
#define MYSORT_H

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "string.h"

#define SUCCES 0
#define FAIL 3
#define FILEER 2

void mysort(void *base, size_t num, size_t size, int (*compare)(const void *, const void *));
void swap(void *i, void *j, size_t size);
int comp(void const *i, void const *j);

#endif