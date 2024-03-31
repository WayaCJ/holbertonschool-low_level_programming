#include "lists.h"
/**
 * add_node- add node
 * @head: pointer
 * @str: str
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int str_len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[str_len])
		str_len++;

	new_node->str = dup_str;
	new_node->len = str_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
