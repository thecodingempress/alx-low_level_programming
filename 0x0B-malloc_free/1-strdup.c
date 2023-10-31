#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates a string duplicate
 * @str: string
 *
 * Return: pointer to new copy
 */
char *_strdup(char *str)
{
	int i = strlen(str);
	int j = 0;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	new = (char *) malloc(sizeof(char) * (i + 1));

	while (j < i)
	{
		new[j] = str[j];
		j++;
	}

	if (new == NULL)
	{
		return (NULL);
	}
	return (new);
}
