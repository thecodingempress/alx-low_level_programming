#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string from src to dest
 * @src: source
 * @dest: destination
 *
 * Return: address to new string
 */
char *_strcpy(char *src, char *dest)
{
	size_t i, j = 0;

	for (i = 0; i < strlen(src); i++)
	{
		for (j = 0; j <= i; j++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
