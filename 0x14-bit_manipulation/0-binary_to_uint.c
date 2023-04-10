#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - convert binary to unsigned integer
  * @b: binary to be converted
  * Return: returns converted number or 0 if error
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
	}

	return (result);
}
