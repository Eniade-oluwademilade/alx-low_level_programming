#include "lists.h"
/**
 * get_dnode_at_index - gets a node at index position
 * @head: pointer to start of list.
 * @index: position in list.
 *
 * Return: node at the indexed position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *dhead;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	dhead = head;
	for (i = 0; i < index; i++)
	{
		dhead = head->next;
		if (dhead == NULL)
			return (NULL);
	}

	return (dhead);
}
