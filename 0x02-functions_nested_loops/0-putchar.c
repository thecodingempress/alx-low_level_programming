#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * main - prints out '_putchar' followed by new line
 *
 * Return: (0)
 */

int main(void)
{
	char cont[] = "_putchar\n";

	size_t i = 0;

	for (i = 0; i <= strlen(cont); i++)
	{
		_putchar(cont[i]);
	}

	return (0);
}
