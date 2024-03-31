#include "lists.h"
/**
 * list_len- count
 * @h: head pointer
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
