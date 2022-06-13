#include "main.h"

/**
 * print_triangle - prints a triangle of 'size'
 * @size: is the interger being passed
 *
 */

void print_triangle(int size)
{
	int a, b;

	a = 1;
	while (a <= size)
	{
		b = a;
		while (b < size)
		{
			_putchar(' ');
			b = b + 1;
		}
		b = 1;
		while (b <= a)
		{
			_putchar('#');
			b = b + 1;
		}
		_putchar('\n');
		a = a + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
