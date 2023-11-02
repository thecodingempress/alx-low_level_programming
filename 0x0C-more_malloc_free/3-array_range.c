#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - creates an array of ints
 * @min: start point
 * @max: end point
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i, j;
	int k = 0;
	int *arr_new;

	if (min > max || max < min)
	{
		return (NULL);
	}

	j = max - min + 1;
	i = min;

	arr_new = malloc(sizeof(int) * j);

	if (!arr_new)
	{
		return (NULL);
	}

	while (k < j && i <= max)
	{
		arr_new[k] = i;
		k++;
		i++;
	}
	return (arr_new);
}
