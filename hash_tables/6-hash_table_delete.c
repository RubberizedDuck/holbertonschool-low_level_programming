#include "hash_tables.h"

/**
 * hash_table_delete - free's every node in a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *temp, *node;
	unsigned long int count = 0;

	while (count < ht->size)
	{
		if (ht->array[count] != NULL)
		{
			node = ht->array[count];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
		count++;
	}
	free(head->array);
	free(head);
}
