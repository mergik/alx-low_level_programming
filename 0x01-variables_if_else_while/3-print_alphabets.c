#include <stdio.h>

/**
  * main - prints alphabets
  * Return: returns 0
  */
int main(void)
{
	char c;
	char b;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);

	putchar('\n');

	return (0);
}
