#include <stdio.h>
/**
 * main - Function that prints 0 - 9 with only using
 * putchar command
 * Return: always returns 0
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
