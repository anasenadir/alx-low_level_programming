#include "main.h"
#include <stdlib.h>

/**
 * get_len - get the length of a string
 * @s: a string
 * Return: the length of the string
 */
int get_len(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: The first string to concatenate
 * @s2: the seconad string
 * Return: pointer on success, null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1_len = 0, s2_len = 0;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = get_len(s1);
	s2_len = get_len(s2);
	ptr = (char *)malloc(s1_len + s2_len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		*(ptr + i) = *(s1 + i);

	for (i = 0; i < s2_len; i++)
		*(ptr + s1_len + i) = *(s2 + i);

	*(ptr + s2_len + s1_len) = '\0';

	return (ptr);
}

