#include "main.h"

/**
 * _strpbrk - Search a str for a set of bytes.
 * @s: The string searcged
 * @accept: bytes to be searched
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
