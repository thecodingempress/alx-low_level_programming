#include "main.h"
/**
 * _strncat - adds n bytes of src to dest
 * @src: source
 * @dest: destination
 * @n: number of chars to append
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *orgDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (orgDest);
}
