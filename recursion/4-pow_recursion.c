#include "main.h"

/**
 * _pow_recursion - prints x to the power of y
 * @x: integer that is passed
 * @y: integer that is being used as power
 * Return: Value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
