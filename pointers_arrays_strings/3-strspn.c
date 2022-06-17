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
 * _strspn - counts the length of substring
 * @s: the string to search
 * @accept: the characters to count
 * Return: number of letters counted
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = _strlen(accept);
	unsigned int aCount = 0;
	unsigned int sCount = 0;
	unsigned int total = 0;

	while (aCount < len)
	{
		while ((s[sCount] != ' ') && (s[sCount] != '\0'))
		{
			if (accept[aCount] == s[sCount])
			{
				total = total + 1;
			}
			sCount = sCount + 1;
		}
		sCount = 0;
		aCount = aCount + 1;
	}
	return (total);
}
