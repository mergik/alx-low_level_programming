#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to give as change
  * @argc: the number of command-line arguments
  * @argv: an array containing the command-line arguments
  * Return: 0 on success, 1 on error
  */
int main(int argc, char *argv[])
{
	int numCoins = 0;
	int div = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		div = cents / 25;
		numCoins += div; /* number of 25 cents coins */
		cents = cents % 25;

		div = cents / 10;
		numCoins += div; /* number of 10 cents coins */
		cents = cents % 10;

		div = cents / 5;
		numCoins += div; /* number of 5 cents coins */
		cents = cents % 5;

		div = cents / 2;
		numCoins += div; /* number of 2 cents coins */
		cents = cents % 2;

		div = cents / 1;
		numCoins += div; /* number of 1 cents coins */
		printf("%d\n", numCoins);
	}
	return (0);
}

