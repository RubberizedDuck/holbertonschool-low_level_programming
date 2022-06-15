#include "main.h"
#include <string.h>

/**
 * _strcat - appends dest with src
 * @dest: is the copy of string passed to src
 * @src: is the string being concatinated
 * Return: dest which is the cat of src
 */

char *_strcat(char *dest, char *src)
{
	int des, str;

	/* Finds the length of string */
	des = 0;
	while(dest[des] != '\0')
	{
		des = des + 1;
	}
	/*
	 * Appends the source string characters until not equal to
	 * null character of src
	 */
	str = 0;
	while (src[str] != '\0')
	{
		dest[des] = src[str];
		des = des + 1;
		str = str + 1;
	}
	/* Append null character in the last */
	dest[des] = '\0';
	return (dest);
}
