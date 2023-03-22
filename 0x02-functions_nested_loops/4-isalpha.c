#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @e: input
 * Return: 1 if e is letter (both lower or upper), 0 if otherwise
 */

int _isalpha(int e)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
