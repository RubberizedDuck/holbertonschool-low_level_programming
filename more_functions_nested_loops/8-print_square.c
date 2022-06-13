#include "main.h"

/**
 * print_square - prints the a block of square's equal to size,
 * size amount of times
 * @size: is the integer being passed
 */

void print_square(int size)
{
	int n, o;

	n = 0;
	while (n < size && size != 0)
	{
		o = 0;
		while (o < size)
		{
			_putchar('#');
			o = o + 1;
		}
		_putchar('\n');
		n = n + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
