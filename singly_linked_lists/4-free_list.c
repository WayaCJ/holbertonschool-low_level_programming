#include "head.h"
/**
 * free_list- frees
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->nxt;
		free(tmp);
	}
