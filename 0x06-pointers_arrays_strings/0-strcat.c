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
	char *orgDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src !- '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (orgDest);
}
