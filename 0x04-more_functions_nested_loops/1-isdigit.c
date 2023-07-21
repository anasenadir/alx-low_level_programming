#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character to be checked
 * 
 * Return: 1 if is digit
 *      0 if is not digit
*/
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}