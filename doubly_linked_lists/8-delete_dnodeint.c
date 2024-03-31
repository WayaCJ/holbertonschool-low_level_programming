#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node.
 * @head: Double pointer.
 * @index: index.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		temp = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->next != NULL)
	{
		current->next->prev = temp;
	}
	temp->next = current->next;

	free(current);
	return (1);
}

