#include "lists.h"

/**
 * listint_len - get the length of the list
 * @h: the head of the list
 * Return: Length of the list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *current =  h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
