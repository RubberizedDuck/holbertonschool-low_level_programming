#include "main.h"

/**
 * is_sqrt - Function to find out if int is square root
 * @i: the starting number
 * @j: number to check against
 * Return: j if the number is sqrt
 * -1 if not
 */

int is_sqrt(int i, int j)
{
	if (j * j == i)
	{
		/* if is square rootable, returns j */
		return (j);
	}
	if (j * j > i)
	{
		/* returns -1 if not */
		return (-1);
	}
	return (is_sqrt(i, j + 1));
}

/**
 * _sqrt_recursion - returns the square root of the parsed int
 * @n: is the int being parsed
 * Return: value of square root of n.
 */

int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 0));
}
