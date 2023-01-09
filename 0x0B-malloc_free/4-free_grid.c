#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 *  your alloc_grid function
 *  @grid: grid to free
 *  @height: height of the grid
 *  Return: Nothing
 */
void free_grid(int **grid, int height)
{
int j;
for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}
