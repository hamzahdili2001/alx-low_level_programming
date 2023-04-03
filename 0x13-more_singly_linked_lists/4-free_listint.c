#include "lists.h"
/**
 * free_listint - function that frees the list
 * @head: head of the list
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
