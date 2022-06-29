#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer to be compared with cmp
 * @array: the array to be searched
 * @size: size of the array
 * @cmp: the function being used to compare
 * Return: the number in array that matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (0);
	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return (index);
		index++;
	}
	return (index);
}
