#include "main.h"

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
 * _strpbrk - will look for the first match of string types
 * @s: String to search
 * @accept: character to look for
 * Return: starts with the first character found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int len = _strlen(accept);
	unsigned int sCount = 0;
	unsigned int aCount = 0;

	while ((s[sCount] != ' ') && (s[sCount] != '\0'))
	{
		while (aCount < len)
		{
			if (accept[aCount] == s[sCount])
			{
				return (&s[sCount]);
			}
			aCount = aCount + 1;
		}
		aCount = 0;
		sCount = sCount + 1;
	}
	return (s);
}
