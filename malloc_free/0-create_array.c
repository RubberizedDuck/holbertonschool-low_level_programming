#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char
 * @size: size of the array to create
 * @c: char to use for array
 * Return: the pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i = i + 1;
	}
	return (p);
}
