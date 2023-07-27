#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s, *end = s;

	while (s[len] != '\0')
	{
		len++;
	}

	end = s + len - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
