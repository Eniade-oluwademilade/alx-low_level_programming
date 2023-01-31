#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds node to start of list
 * @head: start of list
 * @n: an integer
 *
 * Return: address of new element or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);

	node1->n = n;
	node1->next = *head;

	*head = node1;

	return (node1);
}
