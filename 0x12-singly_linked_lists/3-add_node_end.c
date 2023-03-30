#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node to the end of the list
 * @head: pointer to pointer to the head
 * @str: string of data
 * Return: pointer to the new Node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current = (*head);

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
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);

}
