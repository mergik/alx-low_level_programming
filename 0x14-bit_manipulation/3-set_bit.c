#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: number to modify
  * @index: index of the bit to set to 1
  * Return: 1 if success, -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
