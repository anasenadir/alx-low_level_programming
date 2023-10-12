#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	if (separator == NULL || *separator == 0)
		separator = "";

	if (n > 0)
		printf("%d", va_arg(ptr, int));

	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator, va_arg(ptr, int));
	}

	printf("\n");
	va_end(ptr);
}
