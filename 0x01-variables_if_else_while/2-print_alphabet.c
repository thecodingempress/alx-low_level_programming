#include <stdio.h>

/**
 * main - program prints alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
