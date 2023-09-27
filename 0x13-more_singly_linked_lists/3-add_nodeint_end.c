#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list of integers.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
