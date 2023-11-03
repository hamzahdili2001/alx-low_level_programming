#include "hash_tables.h"
#include <string.h>
#define True 1
#define False 0
/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: is a pointer to the hash table.
 * @key: is the key.
 * @value: is the value.
 * Return: True or False - based on the code.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (False);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (False);
			return (True);
		}
		tmp = tmp->next;
	}
	new_node =  malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (False);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (False);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (False);
	}
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (True);
}
