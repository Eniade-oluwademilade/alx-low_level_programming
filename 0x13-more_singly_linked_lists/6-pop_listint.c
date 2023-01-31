#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes head node of list
 * @head: node head
 *
 * Return: head node's data (n)
 *         if empty returns 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop;

	if (*head == NULL)
		return (0);

	temp = *head;
	pop = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (pop);
}
