#include "head.h"
/**
 * add_nodeint- add node
 * @head: pointer
 * @n: new int
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->nxt = NULL;
	}
	else
	{
		new_node->nxt = *head;
	}
	new_node->n = n;
	*head = new_node;

	return (*head);
}
