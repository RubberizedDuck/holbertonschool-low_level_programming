#include "main.h"

/**
 * string_toupper - converts lowercase characters to uppercase
 * @str: the character being changed
 * Return: Adds in uppercase if not already
 */

char *string_toupper(char *str)
{
	int ind = 0;

	while (str[ind] != '\0')
	{
		if (str[ind] > 96 && str[ind] < 123)
		{
			str[ind] = str[ind] - 32;
		}
		ind = ind + 1;
	}
	return (str);
}
