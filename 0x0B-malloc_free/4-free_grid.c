#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees a 2 dimensional grid previously created by
  *		your alloc_grid function.
  * @grid: the 2 dimensional grid to be freed.
  * @height: size of row of @grid.
  *
  * Return: nothing.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
