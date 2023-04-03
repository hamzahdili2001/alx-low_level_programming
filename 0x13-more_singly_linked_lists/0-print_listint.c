#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - function that print all elements in the list
 * @h: head of the list
 * Return: Length of the list
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
