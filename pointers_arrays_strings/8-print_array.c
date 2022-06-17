#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array in string
 * @a: is the array
 * @n: is the number of elements in array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		/* prints array from index i */
		printf("%d", a[i]);
		i = i + 1;
		if (i < n)
		{
			/* prints if i is less than n */
			printf(", ");
		}
	}
	printf("\n");
}
