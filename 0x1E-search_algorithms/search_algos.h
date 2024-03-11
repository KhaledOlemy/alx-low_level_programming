#ifndef search_algos_h
#define search_algos_h
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int splitter(int *array, int start, int end, int value);
#endif
