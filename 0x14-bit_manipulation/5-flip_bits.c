#include "main.h"

/**
  * flip_bits - returns the number of bits to be flipped to get from 1 number
  * to another
  * @n: number to be flipped
  * @m: number to be flipped to
  * Return: number of bits to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
