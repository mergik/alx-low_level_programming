#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *
  *
  *
  *
  */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;
	// char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for(j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	sum += atoi(arg);
	return (0);
}
