#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of elements
 *
 * Return: pointer to memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	char *new;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	new = malloc(nmemb * size);

	if (!new)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		new[i] = 0;
	}

	return ((void *)new);
}
