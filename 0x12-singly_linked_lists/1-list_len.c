#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
