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
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d], %s\n", current->len, current->str);
		current = current->next;
		count++;
	}

	return (count);
}

