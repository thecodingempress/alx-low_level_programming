#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_listint - prints the elements for a list
 * @h: list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp = malloc(sizeof(listint_t));
	size_t i = 0;

	if (!h)
	{
		return (0);
	}
	*temp = *h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	};

	return (i);
}
