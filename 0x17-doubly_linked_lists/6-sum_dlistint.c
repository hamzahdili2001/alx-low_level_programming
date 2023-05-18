#include "lists.h"
/**
 * sum_dlistint - unction that returns the sum of all the data
 *								(n) of a dlistint_t linked list.
 * @head: the head.
 * Return: sum of the n or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
