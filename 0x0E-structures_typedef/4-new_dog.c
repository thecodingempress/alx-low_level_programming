#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new;
	dog_t *point;
	char *newname;
	char *newowner;

	point = &new;

	if (!point)
	{
		return (NULL);
	}
	newname = name;
	newowner = owner;

	point->name = newname;
	point->age = age;
	point->owner = newowner;

	return (point);
}

