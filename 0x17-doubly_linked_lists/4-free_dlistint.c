#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t(*head))
{
	dlistint_t *dhead;

	while (head != NULL)
	{
		dhead = head;
		dhead = head->next;
		free(list);
	}
}
