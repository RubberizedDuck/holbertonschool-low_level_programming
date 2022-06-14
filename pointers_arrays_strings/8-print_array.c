#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
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
			/* prints below if i is less than n */
			printf(", ");
		}
	}
	printf("\n");
}
