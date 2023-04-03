#include "lists.h"

/**
 * free_listint2 - free list and set the head to NULL
 * @head: head of the list
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
