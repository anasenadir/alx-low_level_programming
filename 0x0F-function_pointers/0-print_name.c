#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: the name to be printted
 * @f: a function pointer that takes care of the printing process
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
