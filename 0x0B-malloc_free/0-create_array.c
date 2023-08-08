#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array.
 * @c: a char to initialize the array.
 * Return: Returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	if (size <= 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
