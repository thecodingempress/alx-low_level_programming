#include "dog.h"
/**
 * init_dog - intiaizes a variable of type struct dog
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
