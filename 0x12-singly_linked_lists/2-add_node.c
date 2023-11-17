#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node at the beginning of the list
 * @head: pointer to head node
 * @str: new str
 *
 * Return: pointer to new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return  (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
