#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * freeLlist - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void freeLlist(custom_s **head)
{
	custom_s *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of the list.
 * Return: length the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t lNodes = 0;
	custom_s *ptrList = NULL, *newNode = NULL, *checkNode = NULL;

	while (head != NULL)
	{
		newNode = malloc(sizeof(custom_s));
		if (newNode == NULL)
		{
			freeLlist(&ptrList);
			exit(98);
		}
		newNode->ptr = (void *)head;
		newNode->next = NULL;
		checkNode = ptrList;
		while (checkNode != NULL)
		{
			if (checkNode->ptr == (void *)head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				freeLlist(&ptrList);
				return (lNodes);
			}
			checkNode = checkNode->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		lNodes++;
		if (ptrList == NULL)
			ptrList = newNode;
		else
		{
			newNode->next = ptrList;
			ptrList = newNode;
		}
		head = head->next;
	}
	freeLlist(&ptrList);

	return (lNodes);
}

