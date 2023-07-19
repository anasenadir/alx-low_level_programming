#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be chacked
 *
 * Return: 1 if it is alphabet char
 * 	0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
