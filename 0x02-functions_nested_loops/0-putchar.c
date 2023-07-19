#include "main.h"

/**
* main - prints _putchar, followed by a new line.
* Desc: print '_putchar' statement
* Return: Always 0
*/
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	return (0);
}
