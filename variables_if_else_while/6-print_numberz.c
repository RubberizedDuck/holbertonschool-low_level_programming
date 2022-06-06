#include <stdio.h>
/**
 * main - Function that prints 0 - 9 with only using
 * putchar command
 * Return: always returns 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
