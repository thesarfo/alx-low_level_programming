#include "lists.h"
/**
 *listint_len - Returns the no. of elements inside a linked list.
 *@h: pointer.
 *Return: the no. of elements in the listint_t function list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
