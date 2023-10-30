#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searched a string for any of
 * a set of bytes
 * @s: string
 * @accept: available set of bytes
 *
 * Return: pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	const char *temp;

	while (*s != '\0')
	{
		for (temp = accept; *temp != '\0'; temp++)
		{
			if (*s == *temp)
			{
				return (s);
				break;
			}
		}
		s++;
	}
	return (NULL);
}
