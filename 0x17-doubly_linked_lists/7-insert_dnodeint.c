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
	if (*h == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*h = newNode;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = current;
		current->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	while (current != NULL)
	{
		if (index == idx)
		{
			newNode->prev = current->prev;
			newNode->next = current;
			current->prev->next = newNode;
			current->prev = newNode;
		}
		index++;
		current = current->next;
	}
	return (newNode);
}
