#include <stdio.h>
#include <stdlib.h>

/**
  * main - calculate multiplication of two numbers
  * @argc: number of arguments
  * @argv: character array of command-line arguments
  * Return: 1 if error, 0 if success
  */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
