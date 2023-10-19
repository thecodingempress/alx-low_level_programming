#include "main.h"
/**
 * _strncpy - copies at string from src to dest;
 * @src: source
 * @dest: destination
 * @n: number of chars to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *orgDest = dest;

	while (i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (orgDest);
}
