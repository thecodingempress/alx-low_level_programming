#include "main.h"
/**
 * _strlen: returns the length of the gne string
 * @s: string
 *
 * Return: string length
 */
int _strlen( char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
