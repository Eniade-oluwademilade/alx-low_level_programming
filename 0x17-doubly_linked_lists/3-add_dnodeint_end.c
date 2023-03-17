#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of list.
 * @head: pointer to start of list
 * @n: value at list in a position
 *
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *dhead;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	dhead = *head;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (dhead->next != NULL)
	{
		dhead = dhead->next;
	}
	dhead->next = new_node;
	new_node->prev = dhead;

	return (new_node);
}
