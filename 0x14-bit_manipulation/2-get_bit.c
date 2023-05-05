#include "main.h"

/**
  * get_bit - Returns the value of a bit at a given index
  * @n: the number to get the bit from
  * @index: the index of the bit to get
  * Return: the value of the bit at index or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	switch (index >= sizeof(unsigned long int) * 8)
	{
		case 1:
			return (-1);
		case 2:
			return ((n >> index) & 1);
	}
}
