#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j; 

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc( width * height * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		int *c_ptr;
		c_ptr = (int *) malloc(width * sizeof(int));

		if (c_ptr == NULL)
		{
			for (j = 0; j < i; i++)
			{
				free(ptr[j]);
			}

		free(ptr);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		*(c_ptr + j) = 0;
	}

	*(ptr + i) = c_ptr;
	}

	return (ptr);
}
