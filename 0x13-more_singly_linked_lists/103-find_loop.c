#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - finds loop in list
 * @head: pointer to head of list
 *
 * Return: address of node else null
 */
listint_t find_listint_loop(listint_t *head)
{
	listint_t *tortise, *hare;

	if (head == NULL)
		return (NULL);

	tortise = head->next;
	hare = (head->next)-next;

	while (hare)
	{
		if (tortise == hare)
		{
			tortise = head;

			while (tortise != hare)
			{
				tortise = tortise->next;
				hare = hare->next;
			}

			return (tortise);
		}
		tortise = tortise->next;
		hare = (hare->next)->next;
	}
	return (NULL);
}
