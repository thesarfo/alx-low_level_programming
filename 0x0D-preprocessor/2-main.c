#include <stdio.h>

/**
*main - that prints the name of the file it
*was compiled from, then a new line.
*Return: name of the file it was compiled from
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
