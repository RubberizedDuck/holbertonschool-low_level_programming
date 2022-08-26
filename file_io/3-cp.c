#include "main.h"

/**
 * copy_error - prints an error if issue with copy of file
 * @from: the file to be copied from
 * @to: the file to receive the copy
 * @file_from: pointer to 'file_from'
 * @file_to: pointer to 'file_to'
 * Return: 0 on success and prints error message
 * depending on exit status
 */

int copy_error(int from, int to, char *file_from, char *file_to)
{
	int reading, writing;
	char buffer[1024];

	reading = read(from, buffer, 1024);
	if (reading == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, file_from);
		exit(98);
	}

	writing = write(to, buffer, reading);
	if (writing == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from);
		exit(100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ft %i\n", to);
		exit(100);
	}
	return (0);
}

/**
 * main - copies the contents of one file to another
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_to);
		exit(99);
	}
	return (copy_error(file_from, file_to, argv[1], argv[2]));
	close(file_from);
	close(file_to);
}
