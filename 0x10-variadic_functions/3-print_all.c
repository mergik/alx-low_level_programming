#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 * @...: The variadic arguments passed.
 *
 * Description: This function prints anything passed to it based on
 * the format specified in @format. It prints the types of arguments
 * specified in @format in the order they are given, separated by a
 * comma and space. If a string is NULL, it prints "(nil)" instead.
 * It then prints a new line.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] && !j)
			printf(", ");
		i++;
	}

	va_end(args);

	printf("\n");
}
