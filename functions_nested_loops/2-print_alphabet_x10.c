#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int a;
        int b = 'a';

	a = 0;
	while (a <= 9)
	{
		for (b = 'a'; b <= 'z'; b = b + 1)
		{
			_putchar(b);
		}
		_putchar('\n');
		a = (a + 1);
	}
}
