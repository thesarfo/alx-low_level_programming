#include "main.h"
/**
 * *_strcpy - copy the str pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed by dest
 * @dest: pointer to the buffer where the str is copied
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
