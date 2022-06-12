#include "main.h"

/**
 * _isupper - Checks if a characert is uppercase.
 * @c: is the character being used
 * Return: 1 if is upper, 0 if not.
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
		return (0);

}
