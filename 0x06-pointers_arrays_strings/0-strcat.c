#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: where the reasult should be placed
 * @src: the string to be added to the string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int str1len, str2len;

	str1len = 0;
	str2len = 0;

	while (*(dest + str1len) != '\0')
	{
		str1len++;
	}

	while (*(src + str2len) != '\0')
	{
		*(dest + str1len) = *(src + str2len);
		str1len++;
		str2len++;
	}

	*(dest + str1len) = '\0';

	return (dest);
}
