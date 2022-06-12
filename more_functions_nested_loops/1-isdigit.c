#include "main.h"

/**
 * _isdigit - Checks if "c" is a digit or not.
 * @c: is the character being checked
 * Return: 1 if "c" is a digit
 * Or 0 if not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
