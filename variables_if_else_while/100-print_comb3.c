#include <stdio.h>

/**
 *main - Prints the possible combination of 2 digits
 *
 *Return: Always returns 0
 */

int main(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '8')
	{
		b = (a + 1);
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a < '8')
			{
				putchar(',');
				putchar(' ');
			}
			b = (b + 1);
		}
		a = (a + 1);
	}
	putchar('\n');
	return (0);
}
