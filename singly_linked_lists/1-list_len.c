#include "lists.h"
/**
 * listint_len- count
 * @h: head pointer
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t c;

	if (h == NULL)
	{
		return (0);
	}
	for (c = 0; h != NULL; c++)
	{
		h = h->nxt;
	}
	return (c);
}
