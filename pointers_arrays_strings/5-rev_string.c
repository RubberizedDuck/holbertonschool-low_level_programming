#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: is the string passed
 * Return: void
 */

void rev_string(char *s)
{
	int ind, len;
	char i;

        ind = 0;
	len = 0;
	while (s[ind++])
	{
		len = len + 1;
	}
	ind = len - 1;
	while (ind >= len / 2)
	{
		i = s[ind];
		s[ind] = s[len - ind - 1];
		s[len - ind - 1] = i;
		ind = ind - 1;
	}
}
