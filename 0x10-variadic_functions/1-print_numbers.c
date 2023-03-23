#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variadic arguments passed.
 *
 * Description: This function prints all the integers passed
 * to it separated by the string specified in @separator.
 * If @separator is NULL, it does not print it.
 * It then prints a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
