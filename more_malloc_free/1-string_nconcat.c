#include <stdlib.h>
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
 * string_nconcat - concats s2 onto s1 by the nth number
 * @s1: destination string
 * @s2: string to concat
 * @n: number of bytes to concat
 * Return: value stored in malloc pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, totalLen, ind1 = 0, ind2 = 0;
	char *concat;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
		len2 = _strlen(s2);
	if (len2 > n)
	{
		len2 = n;
	}
	totalLen = len1 + len2;
	concat = malloc((totalLen + 1) * sizeof(*concat) + 1 + n);
	if (concat == NULL)
	{
		return (NULL);
	}
	while (ind1 < len1)
	{
		concat[ind1] = s1[ind1];
		ind1++;
	}
	while (ind1 < totalLen)
	{
		concat[ind1] = s2[ind2];
		ind1++;
		ind2++;
	}
	concat[ind1] = '\0';

	return (concat);
}
