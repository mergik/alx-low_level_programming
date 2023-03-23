#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a function pointer to the function to be executed on each element
 *
 * Description: This function iterates over the integer array `array`, calling
 * the function pointed to by `action` on each element. The size of the array
 * is given by `size`.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
