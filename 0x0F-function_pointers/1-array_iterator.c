#include "function_pointers.h"
/**
 * array_iterator - this functions iterates an array
(* a blank line
 *@array: the array to iterate
 *@size: the size of the array.
 *@action: this a function pointer.
* Description: this function iterate an array)?
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
