#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0.
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		_putchar(letter);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
