#include "holberton.h"
#include <stdlib.h>

/**
* free_gridk - free a grid
* @grid: grid
* @height: height grid
*/
void free_gridk(int **grid, int height)
{
	int pos = 0;

	while (pos < height)
	{
		free(grid[pos]);
		pos++;
	}
	free(grid);
}

/**
*alloc_grid - create empty array
* @width: width array
* @height: height array
* Return: array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	free_grid(array, height);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
