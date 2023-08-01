#include "main.h"

/**
 * checkstr - define if the string b is inside a.
 * @a: source string
 * @b: string to be searched
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */
int checkstr(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}

/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && checkstr(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
