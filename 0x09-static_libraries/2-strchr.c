#include "main.h"

/**
 * _strchr - Locate a char in a string.
 * @s: The string searched
 * @c: The char located
 *
 * Return: pointer to the first occurence if c is found
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
