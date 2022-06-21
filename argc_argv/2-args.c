#include <stdio.h>

/**
 * main - prints the element of i in array argv followed by a new line
 * @argc: The number of arguments being passed
 * @argv: The array of arguments being passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
