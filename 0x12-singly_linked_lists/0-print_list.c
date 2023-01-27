#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints number of nodes in list
 * @h: head (first node)
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
		printf("[0] (nil)");
	else
		printf("[%d] (%s)\n", h->len, h->str);
	count++;

	return (count);
}
