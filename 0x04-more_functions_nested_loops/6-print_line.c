#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: integer value
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
