#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a list
 * @head: pointer to head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		dlistint_t *temp;

		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
