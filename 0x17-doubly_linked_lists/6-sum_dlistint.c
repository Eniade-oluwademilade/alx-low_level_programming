#include "lists.h"
/**
 * sum_dlistint - sums all data in list
 * @head: pointer to list.
 *
 * Return: sum of list data, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *dhead;
	int sum = 0;

	if (head == NULL)
		return (0);

	dhead = head;
	while (dhead != NULL)
	{
		sum += head->n;
		dhead = head->next;
	}
	return (sum);
}
