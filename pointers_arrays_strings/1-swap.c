#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *@a: is the first integer
 *@b: is the second integer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
