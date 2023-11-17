#include "lists.h"
/**
 * list_len - returns number of items in a list
 * @h: list in question
 *
 * Return: no of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
