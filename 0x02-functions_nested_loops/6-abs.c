#include "main.h"

/**
  * _abs - calculates the absolute value of an integer
  * @n: number to be checked
  * Return: returns value of n
  */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
