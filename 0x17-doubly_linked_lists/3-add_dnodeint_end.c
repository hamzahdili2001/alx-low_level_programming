#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 *										the end of a dlistint_t list.
 * @head: the head of the dlistint_t.
 * @n: data of dlistint_t.
 * Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *current = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	newNode->prev = current;
	current->next = newNode;

	return (newNode);
}
