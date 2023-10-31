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
	int i;
	int j = 0;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	i = strlen(str);
	new = (char *) malloc(sizeof(char) * (i + 1));

	if (new == NULL)
	{
		return (NULL);
	}

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
