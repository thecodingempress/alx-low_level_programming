#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: count
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(nums);
	va_start(nums, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(nums, int));
		printf("%s", separator);
	}
	printf("%d", va_arg(nums, int));
	printf("\n");
}
