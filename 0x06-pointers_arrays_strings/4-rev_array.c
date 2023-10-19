#include "main.h"
/**
 * reverse_array - reverse the elements of an array
 * @a: array
 * @n: number of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	while (n > 0)
	{
		*a = a[n-1];
		n--;
		a++;
	}
}
