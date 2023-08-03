#include "main.h"

/**
 * _sqrt_helper - performs a binary search to find the
 * natural square root of the number
 * @n: the number  and
 * @low: a lower bound (initially 0).
 * @high: an upper bound (initially the number itself).
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_helper(int n, int low, int high)
{
	if (low > high)
	{
		return (-1);
	}

	int mid = low + (high - low) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0, n));
}
