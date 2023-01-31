#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns numberof elements in linked list.
 * @h: head.
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
