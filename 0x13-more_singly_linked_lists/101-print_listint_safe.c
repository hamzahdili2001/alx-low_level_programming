#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list
 * @head: head of the list
 * Return: length of the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *current = head, *loopNode = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			loopNode = current->next;
			printf("-> [%p] %d\n", (void *)loopNode, loopNode->n);
			break;
		}
		current = current->next;
	}

	if (loopNode != NULL)
		exit(98);

	return (count);
}
