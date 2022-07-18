#include "main.h"
/**
 * set_bit - set the binary representation of base 10 at a certain bit
 * @n: pointer to number to change bit representation
 * @index: the index of bit we want to change
 * Return: 1 on success or -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	/* sets index to 1 then moves across left in binary */
	index = 1 << index;
	/* adds the index value to the n value */
	*n = *n | index;

	return (1);
}
