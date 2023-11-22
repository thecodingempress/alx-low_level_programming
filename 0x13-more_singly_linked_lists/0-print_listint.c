#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_listint - prints the elements for a list
 * @head: list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	};

	return (i);
}
