#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - two dimensional array
*@width: width of the matrix
*@height: height of the matrix
*Return:matrix
*
*
*/

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			free(matrix);
			for (j = 0; j <= i; j++)
				free(matrix[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
