#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);
	return (1);
}
