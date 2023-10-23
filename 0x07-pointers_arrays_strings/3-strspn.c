#include "main.h"
/**
 * _strspn - length of string prefix
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes in intial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	const char *str = s;
	const char *temp;
	unsigned int i = 0;

	while (*s != '\0')
	{
		int found = 0;

		for (temp = accept; *temp != '\0'; temp++)
		{
			if (*str == *temp)
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			i++;
			str++;
		}
		else
		{
			break;
		}
	}
	return (i);
}
