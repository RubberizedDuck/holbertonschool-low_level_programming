#include "main.h"

/**
 * rearrange - swaps specific chars with specific numbers
 * @s: the character to be checked
 */

void rearrange(char *s)
{
	int oldstr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int newstr[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;

	while (i < 10)
	{
		if (*s == oldstr[i])
		{
			*s = newstr[i];
		}
		i = i + 1;
	}
}
/**
 * leet - uses rearrange function to replace certain char with numbers
 * @str: string being passed into function
 * Return: string after function
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		rearrange(&str[i]);
		i = i + 1;
	}
	return (str);
}
