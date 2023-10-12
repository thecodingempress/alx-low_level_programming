#include "main.h"
/**
 * print_most_numbers - prints all numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int h = 48;

	for(h = 48; h < 58; h++)
	{
		if (h == 50 || h == 52)
		{
			continue;
		}
		_putchar(h);
	}
	_putchar('\n');
}
