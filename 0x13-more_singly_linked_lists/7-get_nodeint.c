#include "lists.h"
/**
 * get_nodeint_at_index - find node by index
 * @head: head of the list
 * @index: index to find
 * Return: NULL if not found or node if it found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
