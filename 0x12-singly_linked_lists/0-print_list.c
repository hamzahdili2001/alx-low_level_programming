#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function that prints element of a linkedList
 * @h: the head of the list
 * Return: count of the element in the list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		count++;
	}

	return (count);
}

