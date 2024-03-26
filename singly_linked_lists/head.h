#ifndef _HEAD_H_
#define _HEAD_H_
#include <stdio.h>
#include <stdlib.h>
/**
 *struct listint_- structure
 *@n: int data
 *@nxt: referencial pointer
 */
typedef struct listint_
{
	int n;
	struct listint_ *nxt;
} listint_t;

size_t print_listint(const listint_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
