#include "lists.h"

/**
 * pop_listint - delete the head node of linked list
 * @head: pointer to the first element in linked list
 *
 * Return: the data in the elements that was deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
