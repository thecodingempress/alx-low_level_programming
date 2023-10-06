#include <stdio.h>
/**
 * main - prints all possible comb of 2 numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 56; i++)
	{
		putchar(i);
		putchar(',');
	}
	putchar(57);
	putchar('\n');
	return (0);
}
