#include "main.h"

/**
  * *_strcat - concatenates two strings
  * @dest: pointer to destination string
  * @src: pointer to source string
  * Return: return dest
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p++ = *src++;
	}

	*p = '\0';
	return (dest);
}
