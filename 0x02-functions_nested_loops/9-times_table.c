#include "main.h"

/**
  * times_table - prints multiplication table of 9
  * Return: returns 0
  */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			times = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (times < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(times + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
