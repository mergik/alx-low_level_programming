#include <unistd.h>


/**
  * main - loops through character array
  *
  * _putchar - writes character c to standard output
  * Return: returns 0
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char p[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(p[i]);

	return (0);
}
