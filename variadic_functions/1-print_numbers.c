#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers ending with a new line
 * @separator: string printed between numbers.
 * @n: numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, unsigned int));
		i++;
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
