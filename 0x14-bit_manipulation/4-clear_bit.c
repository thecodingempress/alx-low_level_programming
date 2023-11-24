#include <limits.h>
#include "main.h"
/**
 * clear_bit - sets value of a bit to 0
 * @n: number
 * @index: index of bit
 *
 * Return: 1 or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * CHAR_BIT)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
