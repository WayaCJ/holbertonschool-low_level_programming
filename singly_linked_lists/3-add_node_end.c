#include "head.h"
/**
 * add_node_end- adds it to the end
 * @head: pointer pointer
 * @str: str
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	listint_t *nw;
	listint_t *tmp;

	(void)tmp;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->str = str;
	nw->nxt = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->nxt != NULL)
		{
			tmp = tmp->nxt;
		}
		tmp->nxt = nw;
	}
	return (*head);
}
