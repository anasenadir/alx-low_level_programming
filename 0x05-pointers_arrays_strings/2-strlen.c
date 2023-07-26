#include "main.h"

/**
 * _strlen - return the length of a string
 * @c: the array of charachers
 *
 * Return: (int) the number of characters of a string
 */
int _strlen(char *c)
{
	int len, i;

	while (c[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
