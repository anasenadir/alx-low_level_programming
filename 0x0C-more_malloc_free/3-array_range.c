#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = (int *) malloc(sizeof(*ptr) * (max - min + 1));
	for (i = 0; i <= max - min; i++)
		*(ptr + i) = min + i;
	return (ptr);
}
