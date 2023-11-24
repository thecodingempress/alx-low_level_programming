#include "main.h"
#include <limits.h>
/**
 * set_bit - sets the value of a bit to 1
 * @n: number
 * @index: index
 *
 * Return: 1 or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * CHAR_BIT)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
