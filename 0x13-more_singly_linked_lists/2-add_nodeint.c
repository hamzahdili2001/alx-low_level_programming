#include "lists.h"

/**
 * add_nodeint - add element to the head of the list
 * @head: the head of the list
 * @n: the date of the new element
 * Return: pointer to a new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
