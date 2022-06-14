#include "main.h"
#include <stdio.h>

/**
 * main - Prints out 'Fizz' if "a" divided by 3 equals 0
 * prints 'Buzz' if "a" divided by 5 equals 0
 * and prints 'FizzBuzz' if "a" divided by 3 and 5 equals 0.
 * Return: always 0
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if	(a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a < 100)
		{
			printf(" ");
		}
		a = a + 1;
	}
	printf("\n");
	return (0);
}
