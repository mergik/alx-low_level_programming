#include "main.h"

/**
  * print_last_digit - prints last digit
  * @n: integer to be checked
  * Return: returns last digit
  */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
