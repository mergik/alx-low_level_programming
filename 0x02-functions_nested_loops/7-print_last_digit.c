#include "main.h"

/**
  * print_last_digit - prints last digit
  * @n: integer to be checked
   Return: returns last digit
   */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	return (last_digit);
}
