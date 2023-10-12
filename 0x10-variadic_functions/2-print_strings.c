#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *c_val;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		c_val = va_arg(ptr, char*);
		if (c_val == NULL)
			c_val = "nil";

		if (i == n - 1)
			printf("%s\n", c_val);

		printf("%s%s", c_val, separator);
	}
	va_end(ptr);
}
