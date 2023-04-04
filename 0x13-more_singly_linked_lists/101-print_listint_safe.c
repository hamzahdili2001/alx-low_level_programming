#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe -  function that prints a listint_t linked list.
 * @head: head of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *loop;

	current = head;
	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		if (current >= loop)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		loop = current;
	}
	return (count);
}
