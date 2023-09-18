#include "main.h"

/**
 * free_grid - Entry point
 * @grid: i in the previous function
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
