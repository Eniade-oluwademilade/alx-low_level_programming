#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of list.
 * @h: head of node.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
