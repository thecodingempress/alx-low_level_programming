#include "main.h"
/**
 * print_alphabet - prints all lowercase alphabet with _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
