#include "main.h"

/**
  * *_strncpy - copies a string
  * @dest: pointer to destination string
  * @src: pointer to source string
  * @n: number of bytes to use
  * Return: returns dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If we copied fewer than n characters */
	/* pad the rest of the destination string with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
