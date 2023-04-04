#include "main.h"

/**
* _memcpy - copies n bytes from source
* to destination
* @dest: area of memory
* @src: source
* @n: the length of src.
* Return: a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
