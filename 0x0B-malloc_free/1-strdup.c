#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *_strdup - returns a pointer to a newly allocated space in memory
  * @str: pointer to string
  * Return: returns null if str is null or insufficient memory,
  * and new_str on success
  */
char *_strdup(char *str)
{
	char *new_str = NULL;

	/* return NULL if str is NULL */
	if (str == NULL)
		return (NULL);

	/* allocate memory for the new string */
	new_str = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (new_str != NULL)
	{
		/* copy the original string to the new string */
		strcpy(new_str, str);
	}

	return (new_str);
}
