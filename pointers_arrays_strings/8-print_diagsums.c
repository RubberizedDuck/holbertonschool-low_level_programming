#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of a 2 dimentioanl array diagonally
 * @a: is the array
 * @size: the size of the array being passed
 */

void print_diagsums(int *a, int size)
{
	int r = 0, c = 0, p;
	unsigned int sum1 = 0, sum2 = 0;

	while (c < size)
	{
		p = r * size;
		sum1 = sum1 + *(a + p + c);
		r = r + 1;
		c = c + 1;
	}
	r = size - 1;
	c = 0;
	while (c < size)
	{
		p = r * size;
		sum2 = sum2 + *(a + p + c);
		r = r - 1;
		c = c + 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
