#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns a sum of all it's parameters
 * @n: the first int passed
 *
 * Return: sum of all integers passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start (ap, n);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg (ap, unsigned int);
		i++;
	}
	if (n == 0)
		return (0);
	va_end (ap);
	return (sum);
}
