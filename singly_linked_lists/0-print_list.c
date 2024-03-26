#include "lists.h"
/**
 * print_listint- print data in singly linked list
 *@h: head pointer to the list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c;

	if (h == NULL)
	{
		return (0);
	}
	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->);
		h = h->nxt;
	}
	return (c);
}
