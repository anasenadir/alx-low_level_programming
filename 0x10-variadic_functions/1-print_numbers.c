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

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ptr, int));
			break;
		}
		printf("%d%s", va_arg(ptr, int), separator);
	}

	va_end(ptr);
}
