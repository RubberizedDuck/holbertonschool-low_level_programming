#include "main.h"

/**
 * _strcmp - Function to print the difference between strings
 * @s1: First string
 * @s2: Second string
 * Return: ret, which equals the difference of s1 & s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ret = 0;

	/* loops if string 1 is equal to string 2 */
	while (s1[i] == s2[i])
	{
		/* if string 1 equals to NULL, loop breaks */
		if (s1[i] == '\0')
		{
			break;
		}
		/* if string 2 equals to NULL, loop breaks */
		if (s2[i] == '\0')
		{
			break;
		}
		/* else increment i */
		else
		i = i + 1;
	}
	/* prints the difference of string 1 and string 2 */
	ret = s1[i] - s2[i];
	return (ret);
}
