#include <stdio.h>

/**
  * main - prints name of this program
  * @argc: number of arguments
  * @argv: character array of command line argument
  * Return: returns 0
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
		printf("%s\n", argv[0]);

	return (0);
}
