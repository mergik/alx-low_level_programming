#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: maximum number of bytes to concatenate from s2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_string;
	unsigned int s1_len, s2_len, i;

	/* treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* determine the length of each string */
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* if n is greater or equal to length of s2, use the entire string s2 */
	if (n >= s2_len)
		n = s2_len;

	/* allocate memory for the concatenated string */
	concatenated_string = malloc(sizeof(char) * (s1_len + n + 1));
	if (concatenated_string == NULL)
		return (NULL);

	/* copy the first string into the concatenated string */
	for (i = 0; i < s1_len; i++)
		concatenated_string[i] = s1[i];

	/* copy the first n bytes of second string into the concatenated string */
	for (i = 0; i < n; i++)
		concatenated_string[s1_len + i] = s2[i];

	/* add the null terminator */
	concatenated_string[s1_len + n] = '\0';

	return (concatenated_string);
}
