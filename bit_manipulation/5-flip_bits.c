#include "main.h"
/**
 * flip_bits - returns the number of bits to get from one number to the other
 * @n: first number
 * @m: second number
 * Return: the number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m, flip = 0;

	while (difference > 0)
	{
		flip = flip + (difference & 1);
		difference = difference >> 1;
	}
	return (flip);
}
