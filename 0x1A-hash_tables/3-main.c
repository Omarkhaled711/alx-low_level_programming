#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

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
	for (int i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];
		while(current != NULL)
		{
			printf("%s: %s\n", current->key, current->value);
			current = current->next;
		}
	}
    return (EXIT_SUCCESS);
}
