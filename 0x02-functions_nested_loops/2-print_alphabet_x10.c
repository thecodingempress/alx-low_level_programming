#include "main.h"
#include <stddef.h>
/**
 * print_alphabet_x10 - prints the alphabet ten times in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	size_t i  = 0;

	while (i < 10)
	{
		char j = 'a';

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
