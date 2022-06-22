#include <stdlib.h>
#include "main.h"

/**
 * _strlen - is a function that returns the length of a string.
 * @s: is the character being passed.
 * Return: len is the string length.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != 0)
	{
		len = len + 1;
	}
	return (len);
}

 /**
 * _strcpy - copies a string to a new pointer
 * @dest: is the copy of string passed to src
 * @src: is the string being copied
 * Return: dest which is a copy of src
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = 0;

	return (dest);
}

/**
 * str_concat - appends s2 to s1 stored in a memory location
 * @s1: The first string pointer
 * @s2: The second string pointer
 * Return: the pointer with the allocated arrays
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int s1Len, s2Len;

	s1Len = _strlen(s1);
	s2Len = _strlen(s2);

	ptr = malloc(s1Len + s2Len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
	_strcpy(ptr, s1);
	_strcpy(&ptr[s1Len], s2);
	}
	return (ptr);
}
