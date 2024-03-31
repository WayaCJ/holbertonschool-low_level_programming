#include "lists.h"
/**
 * free_dlistint - Frees.
 * @head: A pointer to the head.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}


