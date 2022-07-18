#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: filename to be used
 * @letters: amount of letters to be read
 * Return: number of characters written or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filDes, fileRead, fileWrite;
	char *stored;

	if (filename == NULL)
		return (0);

	filDes = open(filename, O_RDONLY);
	if (filDes == -1)
		return (0);
	stored = malloc(sizeof(stored) * letters);
	if (stored == NULL)
		return (0);
	fileRead = read(filDes, stored, letters);
	if (fileRead == -1)
	{
		free(stored);
		return (0);
	}
	fileWrite = write(STDOUT_FILENO, stored, fileRead);
	if (fileWrite == -1)
		return (0);

	free(stored);
	close(filDes);
	return (fileRead);

}
