#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the value of the last digit
 * @n: number
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int j = n % 10;
	
	if (n < 0)
	{
		j = -j;
	}
	
	printf("%d", j);
	return (j);
}
