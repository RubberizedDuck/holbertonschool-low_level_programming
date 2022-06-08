#include <stdio.h>
/**
 * _isalpha - Checks if c is an alphabetic character
 *@c: is the character being checked
 * Return: 1 if c is a letter, lowercase or uppercase
 * or 0 if it is not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
