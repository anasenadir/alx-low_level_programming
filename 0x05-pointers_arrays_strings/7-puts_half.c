#include "main.h"

/**
 * puts_half - prints a half of a string
 * @str: the string to be half printed
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
		len += 1;

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
