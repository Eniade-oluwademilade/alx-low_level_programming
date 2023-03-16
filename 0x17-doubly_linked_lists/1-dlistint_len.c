#include "lists.h"
/**
 * size_t dlistint_len - gives length of list
 * @h: pointer to start of list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *dhead;
	size_t num_elem = 0;

	dhead = h;
	while (dhead != NULL)
	{
		dhead = dhead->next;
		num_elem++;
	}
	return (num_elem);
}
