#include "main.h"

/**
  * *_strncat - concatenates two strings
  * @dest: pointer to destination string
  * @src: pointer to source string
  * @n: number of byte to use
  * Return: return dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (n > 0 && *src != '\0')
	{
		*p++ = *src++;
		n--;
	}

	*p = '\0';
	return (dest);
}
