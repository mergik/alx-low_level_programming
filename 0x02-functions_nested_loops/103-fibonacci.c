#include <stdio.h>

/**
  * main - calculate fibonacci to 4000000 and sum of even numbers
  * Return: returns 0
  */
int main(void)
{
	int a = 1;
	int b = 2;
	int temp;
	int sum = 2;  /* start with the sum of the first even number */

	while (b <= 4000000) 
	{
		temp = b;
		b = a + b;
		a = temp;

		if (b % 2 == 0) 
		{
			sum += b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
