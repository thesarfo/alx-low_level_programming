#include "lists.h"

/**
 *add_nodeint - It adds a new node at the beginning.
 *@head: a pointer to the address.
 *@n: an integer for the new node
 *
 *Return: NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

