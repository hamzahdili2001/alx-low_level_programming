#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: the head of the list
 * @n: the data of the new Node
 * Return: NewNode
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = newNode;
	}

	return (newNode);
}
