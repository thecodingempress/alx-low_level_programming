#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: char in int
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
