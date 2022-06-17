#include "main.h"

/**
 * _memcpy - copy the string from one memory address to another
 * @dest: destination string address
 * @src: source string address
 * @n: number of bytes to be copied
 * Return: Destination after copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *p = dest;
	char *ps = src;

	while (i < n)
	{
		p[i] = ps[i];
		i = i + 1;
	}
	return (dest);
}
