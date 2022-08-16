#include "hash_tables.h"

/**
 * hash_table_get - returns the value of a key in a hash table
 * @ht: the hash table to search
 * @key: the key to the value
 * Return: pointer to the value or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value = NULL;
	hash_node_t *find = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);

	find = (ht->array)[index];
	while (value == NULL)
	{
		if (strcmp(find->key, key) == 0)
		{
			value = find->value;
			break;
		}
		if (find->next == NULL)
			return (NULL);
		find = find->next;
	}
	return (value);
}
