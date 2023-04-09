#include <stdio.h>

/**
 * main - Prints the no of arguments passed into it
 * @argc: Number of CL arguments
 * @argv: name of array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
