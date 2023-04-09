#include "main.h"
/**
*_isdigit - function that checks if a char is digit or not
*@c: input
*Return: returns 1 if c is a digit && 0 otherwise
*/
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}
