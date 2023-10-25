#include "main.h"
/**
 * _sqrt_recursion - returns a natural square root
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
	{
		return (n);
	}

