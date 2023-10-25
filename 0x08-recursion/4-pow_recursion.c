#include "main.h"
/**
 * _pow_recursion - returns x to the power of y
 * @x: x
 * @y: superscript
 *
 * Return: the answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
