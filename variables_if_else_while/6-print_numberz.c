#include <stdio.h>
/**
 * main - Function that prints 0 - 9 with only using
 * putchar command
 * Return: always returns 0
 */

int main(void)
{
	int x = 0;

	while (x < "10")
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
