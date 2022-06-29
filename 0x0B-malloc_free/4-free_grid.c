#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid
 * @height: number of rows
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
