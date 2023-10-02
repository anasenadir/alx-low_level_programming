#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, s1char, s2char;


	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			s1char = *(s1 + i);
			s2char = *(s2 + i);
			return (s1char - s2char);
		}
		i++;
	}

	return (0);
}
