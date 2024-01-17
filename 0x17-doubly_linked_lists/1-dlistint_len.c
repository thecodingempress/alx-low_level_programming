#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
