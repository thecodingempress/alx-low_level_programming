#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * except q and e
 *
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);

	}
	putchar('\n');
	return (0);
}
