#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the total of the second arg by the third
 * @argc: The number of arguments being passed
 * @argv: The array of arguments being passed
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	int sum1, sum2, total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum1 = atoi(argv[1]);
		sum2 = atoi(argv[2]);
		total = sum1 * sum2;
		printf("%d\n", total);
	}
	return (0);
}
