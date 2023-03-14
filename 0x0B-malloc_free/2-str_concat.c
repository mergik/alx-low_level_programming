#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *str_concat - concatenated two strings
  * @s1: pointer to string 1
  * @s2: pointer to string 2
  * Return: returns concatenated string and NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	char *concat_str = NULL;
	size_t s1_len = (s1 == NULL) ? 0 : strlen(s1);
	size_t s2_len = (s2 == NULL) ? 0 : strlen(s2);

	/* allocate memory for the concatenated string */
	concat_str = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat_str != NULL)
	{
		/* copy the contents of s1 to the concatenated string */
		if (s1 != NULL)
			strcpy(concat_str, s1);

		/* copy the contents of s2 to the concatenated string */
		if (s2 != NULL)
			strcpy(concat_str + s1_len, s2);
	}

	return (concat_str);
}
