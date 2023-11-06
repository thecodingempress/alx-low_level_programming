#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freesmemory holding a data structure
 * @d: pointer to struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	
	free(d);
}
