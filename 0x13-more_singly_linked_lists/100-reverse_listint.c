#include "lists.h"
/**
 * reverse_listint - reverse a linked lists
 * @head: the head of the list
 * Return: head of the list reversed
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);

}

