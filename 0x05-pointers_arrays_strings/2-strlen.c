#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: character string to be checked
  * Return: returns len
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
