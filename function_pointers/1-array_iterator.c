#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - will execute each element of an array to a function
 * @array: the array that stores the elements
 * @size: the size of the array
 * @action: pointer to the function to pass elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t ind = 0;

	if (array == NULL || action == NULL)
		return;
	while (ind < size)
	{
		action(array[ind]);
		ind++;
	}
}
