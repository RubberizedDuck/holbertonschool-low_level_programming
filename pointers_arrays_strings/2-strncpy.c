#include "main.h"

/**
 * _strncpy - a string to copy to the buffer
 * @dest: the string being appended
 * @src: the string being copied
 * @n: the amount of src to copy
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	/* Loop that copies src with dest and increments their index */
	while ((index < n) && src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;
	}
	/*
	 * Loop that starts dest at NULL and increments
	 * if index is less than value of n
	 */
	while (index < n)
	{
		dest[index] = '\0';
		index = index + 1;
	}
	return (dest);
}
