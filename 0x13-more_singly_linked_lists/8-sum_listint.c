#include "lists.h"

/**
 * sum_listint - sums the value n of nodes in list
 * @head: head of the list
 * Return: 0 if list is empty or sum if not
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
