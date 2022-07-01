#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - returns the op_function
 * @s: pointer to string that is being checked
 * Return: 0 if successful
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* Loops while i doesn't equal element 5 in array */
	while (i < 5)
	{
		/* Compares value of s with ops array element */
		if (strcmp(s, ops[i].op) == 0)
		{
			/* Returns function to match operator from index i */
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
