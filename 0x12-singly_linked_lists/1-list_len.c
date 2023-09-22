#include "lists.h"
#include <stdio.h>
/**
 * list_len - function to check no of elements in a list
 * @h: head
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
