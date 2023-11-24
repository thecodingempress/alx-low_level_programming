#include "main.h"
/**
 * print_binary - prints the binary version of a num
 * @n: number in question
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	int start_printing = 0;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			start_printing = 1;
		}
		else if (start_printing)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!start_printing)
	{
		_putchar('0');
	}
}
