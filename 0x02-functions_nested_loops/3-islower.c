#include "main.h"

/**
 * _islower - checks if char is lowercase or uppercase
 * @c: char
 *
 * Return: 0 if it not, 1 if it is
 */

int _islower(char c)
{
	int i = c;

	if (i < 97 || i > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
