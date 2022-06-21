#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Checks if "c" is a digit or not.
 * @c: is the character being checked
 * Return: 1 if "c" is a digit
 * Or 0 if not.
 */

int _isdigit(char *c)
{
	int r;

	/* takes in argv pointer */
	while (*c != '\0')
	{
		/* checks if pointer is digit */
		if (*c >= '0' && *c <= '9')
		{
			/* sets r to equal 1 if pointer is digit */
			r = 1;
		}
		/* returns nothing if not a digit */
		else
			return (0);
		/* increments pointer to run again */
		c = c + 1;
	}
	return (r);
}
/**
 * main - program to print out the total of all numbers
 * passed through onto a new line
 * @argc: The number of arguments being passed
 * @argv: The array of arguments being passed
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	int num, count = 1, total = 0;

	/* if argv is just file name returns 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	while (count < argc)
	{
		/* uses function above to check if is a digit or not */
		if (_isdigit(argv[count]) == 1)
		{
			/* makes num equal int value of argv[count] */
			num = atoi(argv[count]);
			/* total becomes the sum of total and num */
			total = total + num;
			/* increments the counter */
			count = count + 1;
		}
		/* if not a digit, prints error */
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	/* prints the total value */
	printf("%d\n", total);
	return (0);
}
