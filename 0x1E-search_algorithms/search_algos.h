#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

/* BUILT IN HEADERS */
#include <stdio.h>
#include <stdlib.h>

/* FUNCTION PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);


#endif
