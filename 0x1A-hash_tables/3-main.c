#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
    if (ht == NULL)
        return;

    printf("{\n");
    for (size_t i = 0; i < ht->size; i++)
    {
        hash_node_t *node = ht->array[i];
        while (node != NULL)
        {
            printf("'%s': '%s'", node->key, node->value);
            if (node->next != NULL)
                printf(", ");
            node = node->next;
        }
        if (ht->array[i] != NULL)
            printf("\n");
    }
    printf("}\n");
}

void hash_table_delete(hash_table_t *ht)
{
    if (ht == NULL)
        return;

    for (size_t i = 0; i < ht->size; i++)
    {
        hash_node_t *node = ht->array[i];
        while (node != NULL)
        {
            hash_node_t *next = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = next;
        }
    }
    free(ht->array);
    free(ht);
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");

    // Test collision: hetairas collides with mentioner
    hash_table_set(ht, "hetairas", "value1");
    hash_table_set(ht, "mentioner", "value2");

    // Test collision: heliotropes collides with neurospora
    hash_table_set(ht, "heliotropes", "value3");
    hash_table_set(ht, "neurospora", "value4");

    // Test collision: depravement collides with serafins
    hash_table_set(ht, "depravement", "value5");
    hash_table_set(ht, "serafins", "value6");

    // Test collision: stylist collides with subgenera
    hash_table_set(ht, "stylist", "value7");
    hash_table_set(ht, "subgenera", "value8");

    // Test collision: joyful collides with synaphea
    hash_table_set(ht, "joyful", "value9");
    hash_table_set(ht, "synaphea", "value10");

    // Test collision: redescribed collides with urites
    hash_table_set(ht, "redescribed", "value11");
    hash_table_set(ht, "urites", "value12");

    // Test collision: dram collides with vivency
    hash_table_set(ht, "dram", "value13");
    hash_table_set(ht, "vivency", "value14");

    // Print the hash table to verify the results
    hash_table_print(ht);

    // Cleanup
    hash_table_delete(ht);

    return (EXIT_SUCCESS);
}
