#include "main.h"

/**
 * print_binary - prints binary representation of a number passed
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	/**
	 * if n is 0, does 0 + ascii of 0 which will be 0
	 * otherse if n is 1, returns 1 and adds it to ascii of 0
	 * which will be 1
	 */
	_putchar((n & 1) + '0');
}
