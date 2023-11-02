#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: required memory size
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
	{
		exit(98);
	}

	return (new);
}
