#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	int index;

	index = len - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
