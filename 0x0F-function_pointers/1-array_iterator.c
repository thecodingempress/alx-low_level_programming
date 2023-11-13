#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function on each element
 * of an array
 * @array: array of ints
 * @size: size of the array
 * @action: function in question
 *
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
