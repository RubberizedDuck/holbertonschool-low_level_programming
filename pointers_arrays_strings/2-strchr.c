#include "main.h"

/**
 * _strchr - returns the remainder of the address of char if found
 * @s: is the pointer to the string
 * @c: is the starting point from the pointer
 * Return: the remainder of the pointer
 */

char *_strchr(char *s, char c)
{
	/* loops while pointer doesn't equal string */
	while (*s != c)
	{
		/* returns nothing if pointer equals null */
		if (*s == '\0')
		{
			return (0);
		}
		s = s + 1;
	}
	/* returns what's stored in pointer */
	return (s);
}
