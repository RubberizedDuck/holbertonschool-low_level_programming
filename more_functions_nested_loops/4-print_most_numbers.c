#include "main.h"

/**
 * print_most_numbers - prints the numbers between 0 and 9,
 * skipping 2 and 4.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i = i + 1;
			continue;
		}
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
