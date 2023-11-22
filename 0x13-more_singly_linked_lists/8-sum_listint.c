#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * sum_listint - returns sum of n in all nodes
 * @head: head node of list
 *
 * Return: sum of n's
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
