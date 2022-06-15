#include "main.h"

/**
 * reverse_array - Reverse's an array
 * @a: is the array being reversed
 * @n: is the number of elements reversed
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int nheld;

	while (i < n)
	{
		nheld = a[i];
		a[i] = a[n - 1];
		a[n - 1] = nheld;
		n = n - 1;
		i = i + 1;
	}
}
