#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (*src != '\0' && *dest != '\0' && i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (dest);
}
