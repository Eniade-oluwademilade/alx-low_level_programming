#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at a position
 * @h: head of list
 * @idx: position on the list.
 * @n: not yet sure
 *
 * Return: new_node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *dhead;
	int count;

	if (idx == 0)
	{
		new_node = add_dnode(h, n);
		return (new_node);
	}
	dhead = *h;
	while (dhead != NULL)
	{
		dhead = dhead->next;
		i++;
	}
	if (idx == i)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	new_node = (dlistint_t *)malloc(sizeof(dlistint));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	dhead = *h;
	while (count < idx)
	{
		dhead = dhead->next;
		count++;
		if (dhead == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->prev = dhead->prev;
	new_node->next = dhead;
	dhead->prev->next = new_node;
	dhead->prev = new_node;
	return (new_node);
}
