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
 * puts_half - prints second half of string
 * @str: is the string being passed
 *
 */

void puts_half(char *str)
{
	int i, len;

	/*gets the length of str*/
	len = _strlen(str);
	i = 0;
	while (i < len)
	{
		/*checks if i is half of len*/
		if (i > (len - 1) / 2)
		{
			/*prints str from i*/
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
