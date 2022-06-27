#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: start point of array
 * @max: end point of array
 * Return: What is stored in arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(*arr));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
