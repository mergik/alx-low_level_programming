#include <stdio.h>

/**
  * main - prints single digit numbers of base 10 starting from 0
  * Return: returns 0
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}
