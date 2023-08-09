#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer or null on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(sizeof(int) * width);

		if (*(ptr + i) == NULL)
		{
			for (; i >= 0; i--)
				free(*(ptr + i));
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
