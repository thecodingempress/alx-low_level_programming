#include <stdio.h>
/**
 * main - prints all numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 97;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
