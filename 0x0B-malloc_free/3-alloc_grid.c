#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2-D array of ints;
 * @width: first column
 * @height: second column
 *
 * Return: a pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **new;
	int i,j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new = (int **) malloc(height * sizeof(int *));
	
	if (new == NULL)
	{
		return NULL;
	}

	for (i = 0; i < height; i++)
	{
		new[i] = (int *) malloc(width * sizeof(int));
	}
	if (new[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(new[j]);
		}
		free(new);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		new[i][j] = 0;
	}
	return (new);
}
