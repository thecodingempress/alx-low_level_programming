#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - concatenates the args of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int b, c = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * ac);

	if (str == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < ac; b++)
	{
		for (c = 0; c < ac; c++)
		{
			str[b] = *av[c];
		}

	}
	return (str);
}
