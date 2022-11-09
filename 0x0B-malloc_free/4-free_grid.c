#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_grid - removes allocated memory
 * @grid: grid to be freed
 * @height: height of matrix
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

