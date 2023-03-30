#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the list
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
