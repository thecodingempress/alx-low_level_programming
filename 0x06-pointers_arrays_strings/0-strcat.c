#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination
 *
 * Return: pointer to final string
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(src);
	int j = strlen(dest);
	int k = i + j;
	int l = 0;

	for (j = strlen(dest); j <= k; j++)
	{
		for (l = 0; l < i; l++)
			dest[j] = src[l];
	}
	return (dest);
}
