#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each array element
 * Return: Returns the allocated memory array
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	p = array;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (array);
}
