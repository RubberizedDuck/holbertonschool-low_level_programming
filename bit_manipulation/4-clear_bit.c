#include "main.h"
/**
 * clear_bit - clears the bit at index
 * @n: pointer to the bytes to be altered
 * @index: index to be cleared
 * Return: 1 if successful, 0 if value is 0 and -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	index = ~(1 << index);
	*n = *n & index;

	return (1);
}
