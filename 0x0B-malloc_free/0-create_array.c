#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: char to intializev with
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = (char *)malloc(sizeof(char) * size);

	if (str != NULL && size > 0)
	{
		while (i < size)
		{
			str[i] = c;
			i++;
		}
	}

	return (str);
}
