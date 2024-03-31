#include "lists.h"
/**
 * dlistint_len - Counts the elements
 * @h: A pointer to the head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
