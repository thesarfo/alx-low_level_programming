#include "main.h"

/**
 * _abs - computes the absolute value of an int
 * @ab: input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
