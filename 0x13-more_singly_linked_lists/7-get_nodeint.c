#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * get_nodeint - returns the address of a node
 * @head: pointer to head node
 * @index: index of node
 *
 * Return: address of node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
