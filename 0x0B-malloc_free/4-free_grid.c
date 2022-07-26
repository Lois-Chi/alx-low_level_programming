#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid created previously
 * @grid: grid param
 * @height: height param
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
