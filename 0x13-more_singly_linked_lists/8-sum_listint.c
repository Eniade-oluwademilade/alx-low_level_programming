#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - returns sum of data in list
 * @head: start of node.
 *
 * Return: sum of data or 0
 */
int sum_listint(listint_t *head)
{
	int tot = 0;

	while (head)
	{
		tot += head->n;
		head = head->next;
	}

	return (sum);
}
