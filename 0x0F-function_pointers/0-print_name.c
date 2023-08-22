#include "function_pointer.h"

/**
 * print_name - function that prints a name.
 * @name: string to print.
 * @f: this is a function pointer, tha recieves a string.
 * Description: this function prints a name).
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
