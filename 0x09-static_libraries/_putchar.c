#include "main.h"

/**
 * _putchar - writes a char c to stdout
 * @c: The char to be printed
 *
 * Return: On success 1
 * On error, -1 should be returned, and errno is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
