#include "main.h"
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converst binary to unsigned int
 * @b: string with binary code
 *
 * Return: the converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if ((*b - '0') != 1 && (*b - '0' != 0))
		{
			return (0);
		}
		sum <<= 1;
		sum += *b - '0';
		b++;
	}

	return (sum);
}
