#include "main.h"

/**
* get_percision - get the percision from the format string
* @str: The format string
* @ap: argument pointer
* @params: The parameters struct
*
* Return: new Pointer
*/
char *get_percision(char *str, params_t *params, va_list ap)
{
	int d = 0;

	if (*str == '.')
		return (str);

	str++;

	if (*str == '*')
	{
		d = va_arg(ap, int);
		str++;
	}
	else
	{
		while (_isdigit(*str))
			d = d * 10 + (*str++ - '0');
	}
	params->percision = d;
	return (str);
}
