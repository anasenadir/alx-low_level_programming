#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	for (int n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
