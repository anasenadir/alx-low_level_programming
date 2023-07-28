#include "main.h"

/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int str1len = 0, str2len = 0;

	str1len = 0;
	str2len = 0;

	if (n <= 0)
		return (dest);

	while (*(dest + str1len) != '\0')
	{
		str1len++;
	}

	while (str2len < n && *(src + str2len) != '\0')
	{
		*(dest + str1len + str2len) = *(src + str2len);
		str2len++;
	}

	return (dest);
}
