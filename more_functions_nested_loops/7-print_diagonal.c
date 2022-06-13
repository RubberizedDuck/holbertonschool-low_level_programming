#include "main.h"

/**
 * print_diagonal - prints the '\' by number inserted.
 *@n: is the integer being checked.
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	if (i != n && n > 0)
	{
		while (i < n)
		{
			_putchar(' ');
			i = i + 1;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
