#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node.
* @head: the header.
* @index: the index of the node, starting from 0.
* Return: Node, if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (len == index)
			return (current);
		len++;
		current = current->next;
	}
	return (NULL);
}
