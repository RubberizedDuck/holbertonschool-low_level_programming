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
 * _strncat - add src to the end of dest until n
 * @dest: the string being appended
 * @src: the string being copied
 * @n: the amount of src to copy
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int str = 0;

	while (src[str] != '\0' && str < n)
	{
		dest[len] = src[str];
		str = str + 1;
		len = len + 1;
	}
	dest[len + 1] = '\0';
	return (dest);
}
