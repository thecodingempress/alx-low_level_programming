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
	unsigned int i = strlen(b);
	unsigned int j = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[j] != '\0')
	{
		if ((b[j] - '0') != 1 && (b[j] - '0' != 0))
		{
			return (0);
		}
		sum += ((pow(2, i - 1)) * (b[j] - '0'));
		i--;
		j++;
	}

	return (sum);
}
