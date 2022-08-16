#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: pointer to the hash table
 * @key: the key to be added - cannot be empty
 * @value: the value of the key
 * Return: 0 on failure or 1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copied_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	copied_value = strdup(value);
	if (copied_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	i = index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copied_value;
			return (1);
		}
		i++;
	}

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		free(copied_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copied_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
