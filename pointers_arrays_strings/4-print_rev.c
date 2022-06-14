#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @s: is the given string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len = len + 1;
	}
	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
