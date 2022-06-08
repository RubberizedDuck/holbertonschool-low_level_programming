#include "main.h"

/**
 * print_last_digit - prints the last digit by calculating ascii table
 *@a: is the integer used
 *Return: value of b which translates to a number from the ascii table
 */

int print_last_digit(int a)
{
	int b = (a % 10);

	if (b < 0)
	{
		b = b * -1;
	}
	_putchar('0' + b);
	return (b);
}
