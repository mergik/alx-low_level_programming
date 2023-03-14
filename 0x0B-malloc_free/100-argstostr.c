#include "main.h"
#include <stdlib.h>

/**
  * *argstostr - concatenates all the arguments
  * @ac: integer argument to be concat
  * @av: char argument to be concat
  * Return: return null if failed & str if successful
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	/* calculate total length of arguments */
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j]; j++)
			len++;

		/* increment len again to account for newline character to be added */
		len++;
	}

	/* allocate memory for concatenated string */
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	/* copy arguments to concatenated string */
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
