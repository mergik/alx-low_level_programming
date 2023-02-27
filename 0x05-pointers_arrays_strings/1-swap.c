#include "main.h"

/**
  * swap_int - swap the value of 2 pointers
  * @a: integer to be swapped
  * @b: integer to be swapped
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
