#include "main.h"

/**
* _memset - the function name that fills memory with a byte
* @s: pointer to insert the constant
* @b: constant
* @n: maximum bytes to use
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0' && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
