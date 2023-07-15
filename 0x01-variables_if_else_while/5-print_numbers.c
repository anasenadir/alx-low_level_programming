#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf('\n');
	return (0);
}
