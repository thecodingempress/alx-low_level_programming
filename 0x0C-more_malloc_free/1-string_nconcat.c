#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to new string in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j, l;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
		n = strlen(s2);

	j = strlen(s1) + n + 1;
	new = malloc(sizeof(char) * j);

	if (!new)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new[i] = s1[i];
	for (l = 0; l < n; l++)
		new[i++]  = s2[l];
	new[i] = '\0';
	return (new);
}
