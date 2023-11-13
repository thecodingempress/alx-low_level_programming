#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array of ints
 * @size: number of elements in array
 * @cmp: pointer to function to be used
 *
 * Return: index for the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		j = (*cmp)(array[i]);

		if (j != 0)
		{
			break;
		}
	}

	if (i == size)
	{
		return (-1);
	}
	return (i);
}
