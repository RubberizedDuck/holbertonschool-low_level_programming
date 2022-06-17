#include "main.h"

/**
 * _strchr - returns the remainder of the address of char if found
 * @s: is the pointer to the string
 * @c: is the starting point from the pointer
 * Return: the remainder of the pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	/* loops while pointer doesn't equall NULL termoinator */
	while (s[i] != '\0')
	{
		/* returns remainder of c if true */
		if (c == s[i])
		{
			return (&s[i]);
		}
		else
			return ('\0');
		i = i + 1;
	}
	/* returns what's stored in pointer */
	return (s);
}
