#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* aloc_grid - Entry point
*
* @width: char string
*
* @height: char string
*
* Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
int i, j, **grid;

if (width <= 0 || height <= 0)
return (NULL);


grid = malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);

for (j = 0; j < width; j++)
{
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
