#include "main.h"

/**
  * *cap_string - capitalizes all words of a string
  * @str: string to be checked
  * Return: return str
  */
char *cap_string(char *str)
{
	int i;

	/* Capitalize first character */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';

	/* Capitalize characters after separators */
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			switch (str[i - 1])
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '\"':
				case '(':
				case ')':
				case '{':
				case '}':
					str[i] -= 'a' - 'A';
			}
		}
	}

	return (str);
}
