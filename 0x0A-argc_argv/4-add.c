#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds the positive numbers in arg[v]
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, b = 0;
	int a;
	char *s;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i < argc; i++)
	{
		for (s = argv[i]; *s; s++)
		{
			if (!isdigit(*s))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		b += a;
	}
	printf("%d\n", b);
	return (0);
}
