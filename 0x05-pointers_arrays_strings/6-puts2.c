#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other char in the string
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
