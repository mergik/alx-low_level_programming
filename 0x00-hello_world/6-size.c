#include <stdio.h>

/**
  * main - This function prints the sizes of various data types
  * Return: returns zero
  */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %ld bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %lld bytes(s)\n"' sizeof(long long));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}