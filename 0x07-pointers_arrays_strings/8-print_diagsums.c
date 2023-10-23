#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals
 * @a: array of ints
 * @size: number of lines to work with
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, i = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i]; /* Main diagonal: a[0][0], a[1][1], a[2][2], ...*/
		sum2 += a[i * size + (size - 1 - i)]; /* Secondary diagonal: a[0][2]..*/
	}
	printf("%d, %d\n", sum1, sum2);
}
