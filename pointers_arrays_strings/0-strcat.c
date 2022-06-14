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
	strcat(dest, src);

	return (dest);
}
