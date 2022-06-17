#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string being searched
 * @needle: substring to be located
 * Return: If the substring is located, a pointer to the start of
 * the substring
 * else returns NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			i = i + 1;
		}
		haystack = haystack + 1;
	}
	return ('\0');
}
