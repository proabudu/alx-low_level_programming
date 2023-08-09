#include "main.h"
#include <stdlib.h>

/* This function frees a 2D grid allocated by alloc_grid function */
/* It takes two parameters: grid and height of the array */
/* It loops through each row of the array and frees the memory */
/* It then frees the memory of the array of pointers */
void free_grid(int **grid, int height)
{
int i; /* loop variable */
/* check if grid or height is NULL or invalid */
if (grid == NULL || height <= 0)
return;
/* free each row of the array */
for (i = 0; i < height; i++)
free(grid[i]);
/* free the array of pointers */
free(grid);
}

