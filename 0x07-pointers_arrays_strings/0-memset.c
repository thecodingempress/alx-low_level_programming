#include "main.h"
/**
 * _memset - fills a memory area with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: the number of bytes of memory
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (*s != '\0' && i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
