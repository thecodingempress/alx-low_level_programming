#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiplyng 2 args
 * @argc: arg count
 * @argv: arg array
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul  = a * b;

	printf("%d\n", mul);
	return (0);
}
