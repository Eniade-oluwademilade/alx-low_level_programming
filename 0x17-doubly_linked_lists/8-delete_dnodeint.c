#include "lists.h"
/**
 * dlistint_len - gets length of a list
 * @h: pointer to the head.
 *
 * Return: number of nodes in list
 */
int dlistint_len(dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * delete_dnodeint_at_index - deletes node at an index posotion
 * @head: pointer to start of list
 * @index: position of node to be deleted.
 *
 * Return: 1 if succesfully removed , else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int count;
	dlistint_t *dhead;

	dhead = *head;
	if (*head == NULL || index > dlistint_len(dhead))
		return (-1);
	if (index == 0 && dhead->next)
	{
		dhead->next->prev = NULL;
		*head = dhead->next;
		free(dhead);
		return (1);
	}

	else if (index == 0 && dhead)
	{
		free(dhead);
		*head = NULL;
		return (1);
	}

	while (count < index)
	{
		dhead = dhead->next;
		idx++;
	}

	dhead->pre->next = temp->next;

	if (dhead->next)
		dhead->next->prev = temp->prev;
	free(dhead);

	return (1);
}
