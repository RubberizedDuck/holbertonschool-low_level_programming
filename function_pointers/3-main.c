#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1, num2, res, (*calc)(int, int);
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	calc = get_op_func(s);
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	res = calc(num1, num2);
	printf("%d\n", res);

	return (0);
}
