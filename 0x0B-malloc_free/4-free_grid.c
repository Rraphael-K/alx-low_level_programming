#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2D array
 * @grid: 2D array Input
 * @height: Grid height
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int count = 0;

	if (grid == NULL)
		return;
	while (count < height)
		free((int *)grid[count++]);
	free(grid);
}
