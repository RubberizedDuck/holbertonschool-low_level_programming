# include <stdio.h>

/**
 * main - Prints out base 16
 *
 * Return: Always returns 0
 */

int main(void)
{
	int a = '0';
	char x;

	while (a <= '9')
	{
		putchar(a);
		a = (a + 1);
	}
	x = 'a'
		while (x <= 'f')
		{
			putchar(x);
			x = (x + 1);
		}
	putchar('\n');
	return (0);
}
