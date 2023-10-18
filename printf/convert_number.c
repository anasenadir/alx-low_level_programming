#include "main.h"

/**
* print_hex - print unsigned hex number
* @ap: arguments pointer
* @params: the parameter struct pointer
* Return: the number of char printed
*/
int print_hex(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	str = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && l)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
* print_HEX - print unsigned hex number in uppercase
* @ap: arguments pointer
* @params: the parameter struct pointer
* Return: the number of char printed
*/
int print_HEX(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	str = convert(1, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
	{
		*--str = 'X';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
* print_binary - print unsigned binary number
* @ap: arguments pointer
* @params: the parameter struct pointer
* Return: the number of char printed
*/
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);
	int c = 0;
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && n)
		*--str = '0';
	params->unsign = 1;

	return (c += print_number(str, params));
}


/**
* print_octal - print unsigned octal number
* @ap: arguments pointer
* @params: the parameter struct pointer
* Return: the number of char printed
*/
int print_octal(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	str = convert(1, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
		*--str = '0';

	params->unsign = 1;
	return (c += print_number(str, params));
}
