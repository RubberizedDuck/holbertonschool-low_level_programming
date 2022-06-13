#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if	(a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
		a = a + 1;
	}
	return(0);
}
