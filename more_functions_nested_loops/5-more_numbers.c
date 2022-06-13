#include "main.h"

/**
 * more_numbers - prints the numbers between 0 and 14 ten times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int b;

	b = '0';
	while (b <= '9')
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i = i + 1;
		}
		b = b + 1;
		_putchar('\n');
	}
}
