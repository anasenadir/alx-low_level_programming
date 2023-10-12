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

	if (separator == NULL || separator)
		separator = "";


	if (n > 0)
		printf("%s", va_arg(ptr, char*));

	for (i = 1; i < n; i++)
	{
		c_val = va_arg(ptr, char*);
		if (c_val == NULL)
			c_val = "nil";

		printf("%s%s", separator, c_val);
	}

	printf("\n");
	va_end(ptr);
}
