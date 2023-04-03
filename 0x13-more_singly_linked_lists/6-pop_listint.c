#include "lists.h"
/**
 * pop_listint - pops the head of the list
 * @head: the head of the list
 * Return: the value of the head
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}
