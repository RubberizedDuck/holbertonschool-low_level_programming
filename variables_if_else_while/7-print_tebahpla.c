#include <stdio.h>

/**
 * main - Prints the alphabet in reverse.
 *
 * Return: always returns 0.
 */

int main(void)
{
	char x;

	for (x = "z"; x >= "a"; x++)
	{
		putchar("%d", x);
	}
	putchar('\n');
	return (0);
}
