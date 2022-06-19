#include "main.h"

/**
 * print_chessboard - prints a 2D array
 * @a: is the array being printe.
 */

void print_chessboard(char (*a)[8])
{
	int r = 0;
	int c;

	while (r < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[r][c]);
			c = c + 1;
		}
		_putchar('\n');
		r = r + 1;
	}
}
