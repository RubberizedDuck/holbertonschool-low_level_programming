#include <stdio.h>

/**
 * main - Prints the alphabet in reverse.
 *
 * Return: always returns 0.
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar("%d", strrev, x);
	}
	putchar('\n');
	return (0);
}
