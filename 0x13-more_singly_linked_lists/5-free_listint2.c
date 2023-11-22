#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and assigns head to NULL
 * @head: head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL || head == NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	head = NULL;
}
