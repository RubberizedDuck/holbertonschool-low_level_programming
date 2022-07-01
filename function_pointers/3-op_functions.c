#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two integers together
 * @a: first integer
 * @b: second integer
 * Return: Total value of both integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: Total value of both integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: Total value of both integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: Total value of both integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: Total value of both integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
