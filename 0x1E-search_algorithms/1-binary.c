#include "search_algos.h"

/**
 * recursive_search - searches for value in array of ints
 * using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */
static int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;
	int sub_index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%s%d", (i == 0) ? "" : ", ", array[i]);
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	sub_index = recursive_search(array + half + 1, size - half - 1, value);

	if (sub_index == -1)
		return (-1);

	return (sub_index + (int)half + 1);
}

/**
 * binary_search - calls to binary_search to return index of the number
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	return (recursive_search(array, size, value));
}
