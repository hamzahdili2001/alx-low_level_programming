#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe -  function that prints a listint_t linked list.
 * @head: head of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

	if (head == NULL)
		return (0);

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				printf("[%p] %d\n", (void *)tortoise, tortoise->n);
				count++;
				tortoise = tortoise->next;
			}
			hare = head;
			while (tortoise != hare)
			{
				printf("[%p] %d\n", (void *)hare, hare->n);
				count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			break;
		}
		count++;
	}
	return (count);
}

