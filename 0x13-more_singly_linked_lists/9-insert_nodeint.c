#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to head node
 * @idx: index in the list where new node should go
 * @n: value of int n for new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = temp;
		*head = new;

		return (new);
	}

	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
