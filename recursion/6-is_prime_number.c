#include "main.h"

/**
 * isPrime - cycles through num to find prime
 * @i: number to find that is prime
 * @num: number to be checked starting from 1
 * Return: 1 if prime, 0 if not prime
 */

int isPrime(int i, int num)
{
	if (num == i)
	{
		return (1);
	}
	if ((i % num) == 0)
	{
		return (0);
	}
	else
		return (isPrime(i, num + 1));
}

/**
 * is_prime_number - find if prime number
 * @n: number to be checked
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (isPrime(n, 2));
	}
}
