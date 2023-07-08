#include "hash_tables.h"

/**
 * hash_table_set - maps a value to a key in the hash table
 * @ht: the hash table
 * @key: the key to add
 * @value: the value mapped to the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *prev, *new;

	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	prev = current;

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			strcpy(current->value, value);
			return (1);
		}
		prev = current;
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;
	if (prev == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	prev->next = new;
	return (1);
}
