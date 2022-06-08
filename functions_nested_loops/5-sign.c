#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *@n: is the character used
 *Return: 1 and prints + if n is greater than 0
 * 0 and prints 0 if n is zero
 * or -1 and prints - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
