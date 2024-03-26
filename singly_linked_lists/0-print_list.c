#include "lists.h"
/**
 * print_list- print data in singly linked list
 *@h: head pointer to the list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c;

	if (h == NULL)
	{
		return (0);
	}
	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
