#include "main.h"

/**
 * print_triangle - prints a triangle of 'size'
 * @size: is the interger being passed
 *
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a = a + 1)
	{
		for (b = a; b < size; b = b + 1)
		{
			_putchar(' ');
		}
		for (b = 0; b < a; b = b + 1)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
