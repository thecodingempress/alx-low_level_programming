#include "main.h"
/**
 * print_rev - prints string in reverse
 * As: string
 *
 * Return : void
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	for (i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
