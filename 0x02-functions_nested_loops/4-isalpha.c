#include "main.h"

/**
 * _isalpha - checks if a char is a char or not
 * @c: char
 *
 *
 * Return: 1if it is, 0 if its not
 */
int _isalpha(char c)
{
	int n = c;

	if ((n < 91 && n > 64) || (n > 96 && n < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
