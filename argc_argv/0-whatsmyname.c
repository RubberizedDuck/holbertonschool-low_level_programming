#include <stdio.h>

/**
 * main - A program to print its own name
 * @argc: The count of args parsed
 * @argv: The arrays of args parsed
 * Return: 0 always
 */

int main(int argc, char* argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
