#include "main.h"
#include <limits.h>
/**
 * flip_bits - returns the number of bits
 *  you would need to flip from n to m
 *  @n: no 1
 *  @m: no 2
 *
 *  Return: no of bits or 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
