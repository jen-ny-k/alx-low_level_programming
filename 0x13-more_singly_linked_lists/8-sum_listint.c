#include "lists.h"

/**
 * sum_listint - Prints all the elements of a listint_t list.
 * @head: Pointer to the head of the list
 *
 * RETURN: returns the sum number of elements printed.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
