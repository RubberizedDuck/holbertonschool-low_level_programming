#include "main.h"

/**
 * int _islower - Checks for lowercase character
 *@c: is the character being checked
 * Return: 1 if c is lower or 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
