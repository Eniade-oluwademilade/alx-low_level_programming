#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: start of a node
 * @index: position of insertion or deletion
 *
 * Return: 1 success, 0 fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if(index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (node = 0; node < (index- 1); node++)
	{
		if (cpy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}

	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}
