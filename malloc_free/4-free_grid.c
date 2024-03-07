#include "main.h"
#include <stdiolib.h>
/**
 *free_grid- frees
 *@grid: grid
 *@height: height
 *
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
