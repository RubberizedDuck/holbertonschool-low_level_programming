#include "main.h"

/**
 * _strlen_recursion - prints out the string length
 * using recursion loop.
 * @s: is the string
 * Return: 0 if s reaches end of the pointer
 * else will recursively print strlen
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
