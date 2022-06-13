#include "main.h"

/**
 * print_diagonal - prints the '\' by number inserted.
 *@n: is the integer being checked.
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		b = 0;
		while (b < i)
		{
			_putchar(' ');
			b = b + 1;
		}
		_putchar('\\');
		_putchar('\n');
		i = i + 1;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
