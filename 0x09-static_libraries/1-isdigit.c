#include "main.h"
/**
 * _isdigit - checks if a number is digit
 * @n: number in question
 *
 * Return: 1 if number is a digit, 0 if not
 */
int _isdigit(int n)
{
	if (n < 48 || n > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
