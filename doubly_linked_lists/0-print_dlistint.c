#include "lists.h"
/**
 * print_dlistint - elements of a dlistint_t list
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
