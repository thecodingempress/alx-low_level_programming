#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * alloc_grid - creates memory for two-dimensional array
 * @width: width of array
 * @height: of array
 *
 * Return: pointer to start of array
 */
int **alloc_grid(int width, int height)
{
	int **new;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new  = (int **)malloc(sizeof(int) * height);

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		new[i] = (int *)malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			new[i][j] = 0;
		}
	}

	return (new);

}
