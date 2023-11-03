#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash_table.
 * Returns: Nothing.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *n;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];

		while (n != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", n->key, n->value);
			flag = 1;
			n = n->next;
		}
	}
	printf("}\n");
}
