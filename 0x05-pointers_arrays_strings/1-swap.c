#include "main.h"

/**
 * swap - swaps the values of two integers.
 * @a: the first number to be swaped
 * @b: the second number to be swaped
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

