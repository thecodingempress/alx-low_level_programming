#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char in question
 *
 * Return: pointer to first occurence of the char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (!s)
		{
			return (NULL);
		}
		else if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
