#include "main.h"

/**
 * seperate - Checks if previous ascii is a seperator
 * @s: the characters to be checked
 * Return: 1 if true, 0 if false
 */

int seperate(char *s)
{
	int i = 0;
	int seperators[] = {9, 10, 32, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (i < 13)
	{
		if (*s == seperators[i])
		{
			return (1);
		}
		i = i + 1;
	}
	return (0);
}
/**
 * cap_string - Changes next char to capital after seperator
 * @str: is string being passed
 * Return: the string after seperation
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;

	if (str[i] > 96 && str[i] < 123)
	{
		str[i] = str[i] - ('a' - 'A');
	}
	/* loops while string is not equal to null */
	while (str[i] != '\0')
	{
		/*checks if string is a seperator j becomes new index if true*/
		if (seperate(&str[i]) == 1)
		{
			j = i + 1;
			/*checks if j is lowercase*/
			if (str[j] >= 'a' && str[j] <= 'z')
				/*if true, changes index to uppercase*/
				str[j] = str[j] - ('a' - 'A');
		}
		i = i + 1;
	}
	return (str);
}
