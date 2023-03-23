#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the integer array to search in.
 * @size: the number of elements in the array.
 * @cmp: the function used to compare values.
 *
 * Return: index of first element for which the cmp function does not return 0,
 * -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
