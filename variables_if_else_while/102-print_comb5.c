#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day
 */

int main(void)
{
	int first, second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((second / 10) + '0');
			putchar((second % 10) + '0');
			if (first < 98)
			{
			putchar(',');
			putchar(' ');
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
