#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array to be reversed
  * @n: number of elements of the array
  */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	/* Swap elements from the beginning and end of the array */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
