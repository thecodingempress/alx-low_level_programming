#include "main.h"
/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j = 48;
	int k = 49;
	int l = 0;

	for (l = 0; l < 10; l++)
	{
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		for (j = 48; j < 53; j++)
		{
			_putchar(k);
			_putchar(j);
		}
		_putchar('\n');
	}
}
