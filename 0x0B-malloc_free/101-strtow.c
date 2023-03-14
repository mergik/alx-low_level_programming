#include "main.h"
#include <stdlib.h>

/**
  * count_words - Counts the number of words in a string
  * @str: The string to be counted
  * Return: The number of words counted
  */
int count_words(char *str)
{
	int words = 0, flag = 0;

	while (*str)
	{
		if (*str == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
		str++;
	}

	return (words);
}

/**
  * *strtow - splits a string into words
  * @str: string to be split
  * Return: returns null if str is empty or null otherwise returns str
  */
char **strtow(char *str)
{
	char **matrix;
	int index = 0;
	int words, w, letters;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			w = 0;
			while (str[w] != ' ' && str[w] != '\0')
				w++;
			matrix[index] = malloc(sizeof(char) * (w + 1));
			if (matrix[index] == NULL)
			{
				while (index--)
					free(matrix[index]);

				free(matrix);
				return (NULL);
			}
			for (letters = 0; letters < w; letters++)
				matrix[index][letters] = *str++;

			matrix[index++][letters] = '\0';
		}
	}
	matrix[index] = NULL;
	return (matrix);
}
