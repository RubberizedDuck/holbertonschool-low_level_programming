#include "main.h"
/**
 * get_bit - returns the value of a bit at given index
 * @n: integer memory location being checked
 * @index: the bit position to be checked
 * Return: the value of bit position or -1 on an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 32)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
