#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates the first occurence of a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: the pointer to the first occurence or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
