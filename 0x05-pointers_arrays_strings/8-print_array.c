#include "main.h"
#include <stdio.h>
/**
 * print_array: print a certain number of elements
 * in an array
 * @a: array of ints
 * @n: number of ints to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	printf("\n");
}
