#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - frees the list
 * @head: head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
