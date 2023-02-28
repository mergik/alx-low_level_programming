#include "main.h"

/**
  * puts_half - prints half of a string and a new line
  * @str: pointer to string getting checked
  */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
