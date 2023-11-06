#include <stdio.h>

/**
 * main - prints name of file compiled from
 *
 * Return: 0
 */
int main(void)
{
	char *s = __FILE__;

	printf("%s\n", s);
	return (0);
}
