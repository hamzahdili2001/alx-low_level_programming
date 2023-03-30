#include "lists.h"

/**
 * list_len - function that count the length of a linkedList
 * @h: head of the list
 * Return: count of the linked list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
