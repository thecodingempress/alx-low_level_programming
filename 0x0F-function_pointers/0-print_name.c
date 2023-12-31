#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string with name
 * @f: pointer to function
 *
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
