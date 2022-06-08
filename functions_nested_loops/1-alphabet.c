#include "main.h"
/**
 *main - Function to print alphabet
 *
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a = (a + 1);
	}
	_putchar('\n');
}
