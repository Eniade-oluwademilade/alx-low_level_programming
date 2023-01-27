#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - gives length of list
 * @h: first node.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
