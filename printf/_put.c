#include "main.h"


/**
* _puts - prints a string with newline
* @str: the string that we need to print
*
* Return: void
*/
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}


/**
* _putchar - print the char c to the screan
* @c: The char c to be printed
* Return: On Success 1.
* on failure: -1 is returned
*/
int _putchar(int c)
{
	static int i;
	static char buffer[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buffer[i++] = c;
	return (1);
}
