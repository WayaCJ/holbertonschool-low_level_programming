#include "lists.h"
/**
 * sum_dlistint - Sums all data
 * @head: A pointer to the head.
 *
 * Return: sum all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
