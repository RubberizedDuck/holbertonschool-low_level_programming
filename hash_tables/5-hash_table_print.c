#include "hash_tables.h"

/**
 * hash_table_print - function to print every node in a hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int count = 0;
	char symbol = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (count < ht->size)
	{
		if (ht->array[count] != NULL)
		{
			if (symbol == 1)
				printf(", ");

			node = ht->array[count];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			symbol = 1;
		}
		count++;
	}
	printf("}\n");
}
