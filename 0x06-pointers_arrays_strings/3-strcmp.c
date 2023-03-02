#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: pointer to string 1
  * @s2: pointer to string 2
  * Return: return
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	/* Compare characters until we reach the end of one of the strings */
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			/* The characters differ, so return the difference */
			return (s1[i] - s2[i]);
		}
	}

	/* if we reached the end of both strings, they are equal */
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}

	/* Otherwise, the stirngs differ in length */
	return (s1[i] - s2[i]);
}
