#include "main.h"
/**
* create_array - array of characters, and
* initializes it with a char.
*@size: Size of the array
*@c: Character to be inserted
*Return: NULL if it fails,
*pointer to array if normal.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
