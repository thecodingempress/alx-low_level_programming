#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - returns the number of elements in a linked
 * listint_t list
 * @h: list
 *
 * Return: number of items in list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	listint_t *temp = malloc(sizeof(listint_t));

	if (!h)
	{
		return (0);
	}

	*temp = *h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	free(temp);

	return (i);
}
