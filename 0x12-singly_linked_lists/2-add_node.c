#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - inserts a node 
 * @head: start of node
 * @str: list
 *
 * Return: address of new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = copy;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
