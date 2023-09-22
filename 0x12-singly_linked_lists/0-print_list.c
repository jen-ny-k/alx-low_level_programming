#include "lists.h"
#include <stdio.h>
/**
 * print_list - list to be printed
 * @h: a pointer
 * Return: list
 */
size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
