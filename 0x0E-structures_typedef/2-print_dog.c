#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (!name)
	{
		name = "(nil)";
	}
	printf("Name: %s\n", name);

	if (!age)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %f\n", age);
	}

	if (!owner)
	{
		owner = "(nil)";
	}
	printf("Owner: %s\n", owner);
}
