#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid
 * @grid: grid of memories
 * @height: array height
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
