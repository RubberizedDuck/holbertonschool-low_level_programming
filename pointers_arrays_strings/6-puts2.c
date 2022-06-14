#include "main.h"

/**
* _strlen - is a function that returns the length of a string.
* @s: is the character being passed.
* Return: len is the string length.
*/

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != 0)
	{
		len = len + 1;
	}
	return (len);
}

/**
 * puts2 - Prints every other character after the first
 * @str: is the character being passed
 *
 */

void puts2(char *str)
{
	char string;
	int ind;
	int len = 0;

	ind = _strlen(str);
	while (len >= 0 && len < ind)
	{
		string = *(str + len);
		_putchar(string);
		len = len + 2;
	}
	_putchar('\n');
}
