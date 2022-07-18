#include "main.h"

/**
 * binary_to_uint - converts a string of 0's and 1's to base 10
 * @b: the string to be converted
 * Return: the base 10 equivalent of binary string,
 * or 0 if the string contains anything else besides 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		result <<= 1;
		result = result + b[index] - '0';
		index++;
	}
	return (result);
}
