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
	int l, j;
	char *new;
	int i = 0;
	unsigned int m = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	l = strlen(s1) + strlen(s2);
	j = strlen(s1);
	new  = (char *) malloc(sizeof(char) * (l + 1));

	if (new == NULL)
	{
		return (NULL);
	}

	while (i < j)
	{
		new[i] = s1[i];
		i++;
	}

	while (i < l && m < strlen(s2))
	{
		new[i] = s2[m];
		i++;
		m++;
	}

	new[l] = '\0';
	return (new);
}
