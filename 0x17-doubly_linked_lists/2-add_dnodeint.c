#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: pointer to head node
 * @n: value of n
 *
 * Return: address of new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (*head);
}
