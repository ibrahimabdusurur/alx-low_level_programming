#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: size of column of the 2 dimensional array.
  * @height: size of row of the 2 dimensional array.
  *
  * Return: NULL on failure.
  *	    NULL if width or height is 0 or negative.
  *	    a pointer to a 2 dimensional array of integers.
  */
int **alloc_grid(int width, int height)
{
	int row, column, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		ptr[row] = malloc(sizeof(int) * width);

		if (ptr[row] == NULL)
		{
			for (; row >= 0; row--)
				free(ptr[row]);

			free(ptr);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			ptr[row][column] = 0;
	}

	return (ptr);
}
