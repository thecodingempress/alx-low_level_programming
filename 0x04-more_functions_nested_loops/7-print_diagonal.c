#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n - length of line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 92;
	int j = 0;
	int k = 32;
	int l = 0;

	for (j = 0; j < n; j++)
	{
		l = 0;

		while (l < n)
		{
			_putchar(k);
			l++;
		}
		_putchar(i);
		_putchar('\n');
	}
}
