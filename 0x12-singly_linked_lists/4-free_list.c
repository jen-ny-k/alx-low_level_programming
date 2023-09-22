#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: list_t list be freed
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}

