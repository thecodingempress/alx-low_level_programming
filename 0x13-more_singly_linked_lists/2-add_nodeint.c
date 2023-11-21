#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: pointer to head node
 * @n: int to be assigned to new node
 *
 * Return: address to new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
