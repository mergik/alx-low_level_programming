#include "main.h"

/**
  * _isdigit - checks if number is a digit
  * @c: num to be checked
  * Return: returns 1 if c is a digit & 0 if otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
