#include "main.h"

/**
 *
 *
 *
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
