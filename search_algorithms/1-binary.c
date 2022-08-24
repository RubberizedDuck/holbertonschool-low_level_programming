#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using binary search
 * @array: sorted array to search
 * @size: size of the sorted array
 * @value: value to find in array
 * Return: -1 if array is equal to NULL or value is not in array,
 * otherwise returns the value found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right;

	if (array == NULL)
		return (-1);

	right = size - 1;
	while (right >= left)
	{
		printf("Searching in array: ");
		i = left;
		while (i < right)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
