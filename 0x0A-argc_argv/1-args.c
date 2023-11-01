#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc <= 1)
	{
		return (0);
	}
	printf("%d\n", argc - 1);
	return (0);
}
