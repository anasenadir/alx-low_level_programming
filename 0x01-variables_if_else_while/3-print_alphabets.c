#include <stdio.h>

/**
* main - Write a program that prints the alphabet in lowercase, and then in uppercase
* followed by new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
		putchar(cha);
	for (cha = 'A'; cha <= 'Z'; cha++)
		putchar(cha);
	putchar('\n');
	return (0);
}
