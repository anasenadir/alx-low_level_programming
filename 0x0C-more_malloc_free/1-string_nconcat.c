#include "main.h"
#include <stdlib.h>

/**
 * get_len - get the length of a string
 * @str: the str to calculate its length
 * Return: return the length of str
 */
int get_len(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != 0)
		len++;

	return (len);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: the second string
 * @n: the number of char to be concat with s1 from s2
 * Return: on success pointer, on failure null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, size_of_s2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = get_len(s1);
	s2_len = get_len(s2);

	if (s2_len >= n)
		size_of_s2 = n;
	else
		size_of_s2 = s2_len;


	ptr = (char *) malloc(s1_len + size_of_s2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		*(ptr + i) = *(s1 + i);

	for (i = 0; i < size_of_s2; i++)
		*(ptr + s1_len + i) = *(s2 + i);

	*(ptr + s1_len + i) = '\0';
	return (ptr);
}
