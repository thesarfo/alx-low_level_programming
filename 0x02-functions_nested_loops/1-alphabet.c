#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0.
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
