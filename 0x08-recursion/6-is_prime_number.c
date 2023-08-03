#include "main.h"

/**
 * is_prime_helper - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @divisor: number that used in iteration
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor <= 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, n - 1));
}
