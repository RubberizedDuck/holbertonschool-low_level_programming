#include <stdio.h>

/**
 *main - prints all possible combinations of single digit numbers.
 *
 *Return: Always returns 0
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a = (a + 1);
		if (a <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
