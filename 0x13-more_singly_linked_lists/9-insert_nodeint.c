#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert newNode at index
 * @head: the head of the list
 * @idx: index where the new not will be insert at
 * @n: data of the newNode
 * Return: NULL or newNode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *newNode;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		count++;
		current = current->next;
	}
	free(newNode);
	return (NULL);
}
