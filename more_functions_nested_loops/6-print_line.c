#include "main.h"

/**
 * print_line - prints the '_' by number inserted.
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i != n && n > 0)
	{
		_putchar('_');
		i = i + 1;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
