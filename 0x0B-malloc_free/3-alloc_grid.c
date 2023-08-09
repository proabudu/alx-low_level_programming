#include "main.h"
#include <stdlib.h>

/* This function allocates memory for a 2D array of integers */
/* It takes two parameters: width and height of the array */
/* It returns a pointer to the array or NULL on failure */
/* It initializes each element of the array to 0 */
/* It checks if width or height is 0 or negative and returns NULL if so */

/* alloc_grid - Allocates a 2 dimensional array of integers.*/
int **alloc_grid(int width, int height)
/* alloc_grid - Allocates a 2 dimensional array of integers. */
{
int **grid; /* pointer to the array */
int i, j; /* loop variables */
/* check if width or height is invalid */
if (width <= 0 || height <= 0)
return (NULL);
/* allocate memory for the array of pointers */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
/* allocate memory for each row of the array */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* free the allocated memory if allocation fails */
while (i--)
free(grid[i]);
free(grid);
return (NULL);
}
}
/* initialize each element of the array to 0 */
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
grid[i][j] = 0;
/* return the pointer to the array */
return (grid);
}

