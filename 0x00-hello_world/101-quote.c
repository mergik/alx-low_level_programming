#include <unistd.h>

/**
  * main - this prints a string without using printf or puts
  * Return: This returns 1 to indicate the program has completed with an error
  */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
