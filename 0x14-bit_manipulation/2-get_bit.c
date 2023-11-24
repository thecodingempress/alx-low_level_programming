#include <limits.h>
#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: number
 * @index: index of bit
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * CHAR_BIT)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
