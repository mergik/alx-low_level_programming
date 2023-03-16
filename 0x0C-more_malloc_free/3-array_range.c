#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array, i;

	/* check for invalid input */
	if (min > max)
		return (NULL);

	/* allocate memory for the array */
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	/* fill the array with values from min to max */
	for (i = 0; i <= (max - min); i++)
		array[i] = min + i;

	return (array);
}
