#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using linear search
 * @array: array to search
 * @size: size of the array
 * @value: value to find
 * Return: the value to find, otherwise will return -1 if value
 * is not present, or the array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
