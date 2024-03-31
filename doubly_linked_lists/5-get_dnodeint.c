#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node.
 * @head: A pointer to the head.
 * @index: The index of the node.
 *
 * Return: nth node of the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
