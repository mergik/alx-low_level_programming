#include "main.h"

/**
  * *string_toupper - changes all lowercase letters of a string to uppercase
  * @str: pointer to string
  * Return: return str
  */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/*Convert to upper by substracting 32 from ASCII value*/
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
