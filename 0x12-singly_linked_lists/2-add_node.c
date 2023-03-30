#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - add node to the head of the list
 * @head: pointer to pointer to the head
 * @str: string that we'll add as a value to the newNode
 * Return: pointer to the New Node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
