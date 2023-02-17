#include <stdio.h>

/**
  * main - prints all numbers of base 16 in lowercase
  * Return: returns 0
  */
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
		putchar(hex + '0');

	for (hex = 0; hex < 6; hex++)
		putchar(hex + 'a');

	putchar('\n');

	return (0);
}
