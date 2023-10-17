#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of the string
 * @str: string in question
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j = strlen(str);
	int k = j / 2;

	if ((j % 2) != 0)
	{
		i = (j + 1) / 2;
	}
	else
	{
		i = k;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
