#include <stdio.h>

/**
 *main - Prints the possible combination of three digits
 *
 *Return: Always returns 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a < '8')
	{
		b = (a + 1);
		while (b <= '9')
		{
			c = (b + 1);
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < '7')
			{
				putchar(',');
				putchar(' ');
			}
				c = (c + 1);
			}
			b = (b + 1);
		}
		a = (a + 1);
	}
	putchar('\n');
	return (0);
}
