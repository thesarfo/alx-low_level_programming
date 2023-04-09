#include "main.h"
/**
*_isdigit - checks if a  char is a digit or not
*@c: input
*Return: returns 1 if true and 0 if false
*/
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}
