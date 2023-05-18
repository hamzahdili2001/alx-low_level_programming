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
	dlistint_t *newNode, *current = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}
	if (index != idx - 1)
		return (NULL);

	if (current == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = current;
	newNode->next = current->next;
	current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}
