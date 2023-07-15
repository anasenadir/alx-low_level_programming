#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
