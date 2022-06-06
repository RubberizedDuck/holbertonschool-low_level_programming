#include <stdio.h>
/**
 * main - Function that prints 0 - 9 with only using
 * putchar command
 * Return: always returns 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
