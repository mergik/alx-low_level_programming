#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - prints a name
  * @name: the name to print
  * @f: function pointer used to print the name in a specific way
  * Description: prints the name by calling the function pointed to by 'f',
  * passing in 'name' as an argument
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
