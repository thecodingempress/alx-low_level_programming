#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string
 *
 * Return : void
 */
void print_rev(char *s)
{
	int i;
	int j = strlen(s) - 1;

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
