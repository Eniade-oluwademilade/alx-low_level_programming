#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - inserts node to end of a list
 * @head: start of node
 * @str: string or list
 * Return: address of new element, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len] ;)
		len++;
	new->str = copy;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}


