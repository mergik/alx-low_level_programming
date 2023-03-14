#include "main.h"
#include <stdlib.h>

/**
  * *create_array - creates an array of chars & initializes it with char c
  * @size: size of the array to be created
  * @c: character to initialize the array with
  * Return: returns null of size is 0 or if it fails & returns pointer to array
  */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;

	/* return NULL if size is 0 */
	if (size == 0)
		return (NULL);

	/* allocate memory for the array */
	arr = (char *) malloc(size * sizeof(char));

	if (arr != NULL)
	{
		unsigned int i;

		/* initialize the array with the specified character */
		for (i = 0; i < size; i++)
			arr[i] = c;
	}

	return (arr);
}
