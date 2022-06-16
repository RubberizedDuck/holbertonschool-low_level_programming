#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: is the pointer/array
 * @b: what is stored in the memory
 * @n: is the number over of times over b will be stored
 * Return: will return pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p = p + 1;
		n = n - 1;
	}
	return (s);
}
