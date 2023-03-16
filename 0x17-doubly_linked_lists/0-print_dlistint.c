#include "lists.h"
/**
 * size_t print_dlistint - prints elements of a doubly linked lists
 * @h: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *dhead;
	size_t num_nodes = 0;

	dhead = h;
	while (dhead != NULL)
	{
		printf("%d\n", dhead->n);
		dhead = dhead->next;
		num_nodes++;
	}
	return (num_nodes);
}
