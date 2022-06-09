#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Will always print to value 98 before stopping
 *@n: n represents integer used
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
		n = n + 1;
	}
	printf("98\n");
}
