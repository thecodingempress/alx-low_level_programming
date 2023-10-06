#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if random number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);

	if (n < 0)
	{
		printf(" is negative\n");
	}
	else if (n == 0)
	{
		printf(" is zero\n");
	}
	else
	{
		printf(" is positive\n");
	}
	return (0);
}
