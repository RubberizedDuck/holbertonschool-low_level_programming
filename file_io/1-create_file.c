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
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

/**
 * create_file - creates a file with given file name and writes in it,
 * if file already exists, will exit command.
 * @filename: the file to be created
 * @text_content: the string to be written into file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filDes, fileWrite;

	if (filename == NULL)
		return (-1);
/* creates a file with read and write permissions */
	filDes = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (filDes == -1)
		return (-1);
/* writes into the file that was created */
	fileWrite = write(filDes, text_content, _strlen(text_content));
	if (fileWrite == -1)
		return (-1);
	close(filDes);

	return (1);

}
