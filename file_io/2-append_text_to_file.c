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
	while (s != NULL && s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

/**
 * append_text_to_file - writes to the end of an existing file
 * @filename: the name of the file to write too
 * @text_content: the string that will be appended to file
 * Return: 1 if successful/string is NULL or -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes, fileWrite;

	if (filename == NULL)
		return (-1);

	fileDes = open(filename, O_RDWR | O_APPEND);
	if (fileDes == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fileDes);
		return (1);
	}
	fileWrite = write(fileDes, text_content, _strlen(text_content));
	close(fileDes);
	if (fileWrite == -1)
		return (-1);
	return (1);
}
