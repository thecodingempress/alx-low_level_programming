#include <stdio.h>
/**
 * main - prints alphabet in reverse with putchar
 *
 * Return: 0
 */
int main(void)
{
	int i = 122;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
