#include "lists.h"
/**
 * listint_len - function to print size of list
 * @h: first node
 * Return: number of elemets
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
