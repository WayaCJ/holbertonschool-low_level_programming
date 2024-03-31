#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts new node.
 * @h: A double pointer to the head.
 * @idx: index.
 * @n: integer.
 * Return: The address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *current = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
			*h = new_node;
			return (new_node);
		}
	}
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
		{
			current->next->prev = new_node;
			current->next = new_node;
		return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
