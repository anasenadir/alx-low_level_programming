#include "main.h"

/*
 * _isalpha - checks for alphabetic character
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
