#include "main.h"

/**
* _isdigit - checks if char is digit
* @c: the char to check
*
* Return: 1 if digit otherwise 0
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
* _strlen - returns the length of a string
* @str: the string
* Return: the length of the string
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * print_number - print a number with options
 * @params: the params struct
 * @str: the base number as a string
 *
 *Return: string pointer
*/
int print_number(char *str, params_t *params)
{
	unsigned int i = _strlen(str);
	int neg = (!params->unsign && *str == '-');

	if (!params->percision && *str == '0' && !str[1])
		str = "";

	if (neg)
	{
		str++;
		i--;
	}

	if (params->percision != UINT_MAX)
		while (i++ < params->percision)
			*--str = '0';

	if (neg)
		*--str = '-';

	if (!params->minus_flag)
		return (print_number_right_shift(str, params));
	else
		return (print_number_left_shift(str, params));
}

/**
* print_number_right_shift - prnits a number with options
* @str: the base number as a string
* @params: the params struct pointer
* Return: string pointer
*/
int print_number_right_shift(char *str, params_t *params)
{
	unsigned int n = 0, neg, neg2, i = _strlen(str);
	char pad_char = ' ';

	if (params->zero_flag && !params->minus_flag)
		pad_char = '0';
	neg = neg2 = (!params->unsign && *str == '-');

	if (neg && i < params->width && pad_char == '0' && !params->minus_flag)
		str++;
	else
		neg = 0;
	if ((params->plus_flag && !neg2) ||
	(!params->plus_flag && params->space_flag && !neg2))
		i++;
	if (neg && pad_char == '0')
		n += _putchar('-');


	if (params->plus_flag && !neg2 && pad_char == '0' && !params->unsign)
		n += _putchar('-');

	else if (!params->plus_flag && params->space_flag && !neg2 &&
		!params->unsign && params->zero_flag)
		n += _putchar(' ');

	while (i++ < params->width)
		n += _putchar(pad_char);

	if (neg && pad_char == ' ')
		n += _putchar('-');

	if (params->plus_flag && !neg2 && pad_char == ' ' && !params->unsign)
		n += _putchar('+');
	else if (!params->plus_flag && params->space_flag &&
	!neg2 && !params->unsign && !params->zero_flag)
		n += _putchar(' ');
	n += _puts(str);
	return (n);
}


int print_number_left_shift(char *str, params_t *params)
{
	unsigned int n = 0, neg, neg2, i = _strlen(str);
	char pad_char = ' ';

	if (params->zero_flag && !params->minus_flag)
		pad_char = '0';
	neg = neg2 = (!params->unsign && *str == '-');

	if (neg && i < params->width && pad_char == '0' && !params->minus_flag)
		str++;
	else
		neg = 0;

	if (params->plus_flag && !neg2 && !params->unsign)
		n += _putchar('+'), i++;
	else if (params->space_flag && !neg2 && !params->unsign)
		n += _putchar(' '), i++;
	n += _puts(str);

	while (i++ < params->width)
		n += _putchar(pad_char);

	return (n);
}
