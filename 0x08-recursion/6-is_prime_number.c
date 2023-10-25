#include "main.h"
/**
 * is_prime_number - checks if number is a prime number
 * @n: number
 *
 * Return: 1 if it is, 0 if its not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n % 11 != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
