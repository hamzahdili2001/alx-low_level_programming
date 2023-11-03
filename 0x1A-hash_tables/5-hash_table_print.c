#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  is the hash table.
 * Return: Nothing.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int f = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			f = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
