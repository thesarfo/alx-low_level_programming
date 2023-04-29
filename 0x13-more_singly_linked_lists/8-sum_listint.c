#include "lists.h"

/**
 * sum_listint - it calculates the sum of all the data inside a listint_t list
 * @head: first node inside the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
