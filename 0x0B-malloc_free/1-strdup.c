#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to capyed
 * Return: eturns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *ptr = NULL;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != 0)
		len++;

	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(str + i); i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
