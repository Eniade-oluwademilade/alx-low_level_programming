#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - the function frees a list
 * @head: start of node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head =  temp;
	}

	head = NULL;
}
