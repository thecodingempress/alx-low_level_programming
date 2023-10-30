#include "main.h"
/**
 * _abs - prints absolute value of a digit
 * @num: num in question
 *
 * Return: 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		num  = num / -1;
	}
	else if (num > 0)
	{
		;
	}
	else
	{
		num  = 0;
	}
	return (num);
}
