#include "lists.h"
#include <stdio.h>

size_t print_list(const listint_t *head, const listint_t *loop_node);
const listint_t *find_loop(const listint_t *head);
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_node = find_loop(head);
	size_t count = print_list(head, loop_node);

	return (count);
}

/**
 * find_loop - finds the node at the start of a loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: a pointer to the node at the start of the loop,
 * or NULL if there is no loop
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

/**
 * print_list - prints the contents of a linked list
 * @head: pointer to the head of the list
 * @loop_node: pointer to the node at the start of the loop,
 * or NULL if there is no loop
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const listint_t *head, const listint_t *loop_node)
{
	const listint_t *node = head;
	size_t count = 0;

	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		count++;
		if (node == loop_node)
			break;
	}
	if (loop_node != NULL)
	{
		const listint_t *loop_start = loop_node;

		do {
			printf("[%p] %d\n", (void *)node, node->n);
			node = node->next;
			count++;
		} while (node != loop_start);
		printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
	}
	return (count);
}

