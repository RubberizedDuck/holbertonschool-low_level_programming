#include <stdio.h>

/**
 * main - program to print number of args parsed exculding the first
 * @argc: the number of arguments passed into the function
 * @argv: the array containing the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	*argv = argv[argc];
	printf("%d\n", argc - 1);

	return (0);
}
