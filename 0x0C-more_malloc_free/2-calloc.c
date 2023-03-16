#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *tmp;

	/* check for invalid input */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory for the array */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* zero out the memory */
	tmp = ptr;
	for (i = 0; i < (nmemb * size); i++)
		tmp[i] = 0;

	return (ptr);
}
