#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char flag;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	flag = 0;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
