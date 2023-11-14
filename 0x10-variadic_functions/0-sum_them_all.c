#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up all teh arguments
 * @n: count/index of last item
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sums = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sums = sums + va_arg(args, int);
	}

	return (sums);

	va_end(args);
}
