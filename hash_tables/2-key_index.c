#include "hash_tables.h"

/**
 * key_index - returns the index for a key
 * @key: key to being used
 * @size: the size of the array of the hash table
 * Return: Returns the index at which the value
 * should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = (hash_djb2(key) % size);
	return (value);
}
