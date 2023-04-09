#include "main.h"
/**
 *_puts - print a string
 * @str: string
 *
 * Description: print a string
 * On success: return the number of chars printed
 */
void _puts(char *str)
{
	if (str)
	while (*str != '\0')
	_putchar(*str++);
	_putchar('\n');
}
