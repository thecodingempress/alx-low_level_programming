#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer to head node
 *
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int j;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	j = temp->n;
	free(temp);

	return (j);
}
