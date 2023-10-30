#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int l = strlen(s1) + strlen(s2);
	int j = strlen(s1);
	char *new;
	int i, m = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}

	new  = (char *) malloc(sizeof(char) * l);

	while (i < j)
	{
		new[i] = s1[i];
		i++;
	}

	while (i < l)
	{
		new[i] = s2[m];
		i++;
		m++;
	}

	new[i] = '\0';

	if (new == NULL)
	{
		return (NULL);
	}
	return (new);
}
