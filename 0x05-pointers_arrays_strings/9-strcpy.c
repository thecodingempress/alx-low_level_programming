#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string from src to dest
 * @src: source
 * @dest: destination
 *
 * Return: void
 */
void *_strcpy(char *src, char *dest)
{
	int i, j = 0;

	for (i = 0; i < strlen(src); i++)
	{
		for (j = 0; j <= i; j++)
		{
			dest[i] = src[i];
		}
	}
}
