#include <stdio.h>

/**
  * main - prints number of arguments passed to it
  * @argc: number of arguments
  * @argv: character array of command-line arguments
  * Return: returns 0
  */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
