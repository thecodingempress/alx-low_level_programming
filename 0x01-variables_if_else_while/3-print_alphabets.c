#include <stdio.h>

/**
 * main - prints the aloahbet is small and capital case
 *
 * Return: 0
 */
int main(void)
{
	char i = 'a';
	char t = 'A';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
