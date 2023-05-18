#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a dnode at index.
 * @h: head.
 * @idx: index.
 * @n: data.
 * Return: the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *current = *h;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	while (index < idx - 1 && current != NULL)
	{
		current = current->next;
		index++;
	}

	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}
	current->next = newNode;

	return (newNode);
}
