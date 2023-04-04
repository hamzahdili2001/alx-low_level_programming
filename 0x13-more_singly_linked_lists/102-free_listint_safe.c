#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t size = 0;

	if (!h || !(*h))
		return (size);

	current = *h;
	while (current)
	{
		size++;
		tmp = current;
		current = current->next;
		free(tmp);

		/* Check for a loop */
		if (current >= tmp)
			break;
	}

	/* Set head to NULL */
	*h = NULL;

	return (size);
}
