#include "main.h"

/**
  * *_strcpy - copies the string src to dest
  * @src: pointer to string getting copied
  * @dest: where string is getting copied to
  * Return: returns value of dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
