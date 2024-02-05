#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head node
 * @index: index of node
 *
 * Return: address to the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (i < index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}

		temp = temp->next;
		i++;
	}

	return (temp);
}
