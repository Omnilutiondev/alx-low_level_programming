#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t print_list(const list_t *h);
/**
 * struct list_s - these are singly linked lists
 *
 * @str: The malloc string
 * len: The length of the string
 * @next: The pointer to the next node
 */

typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;
size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);



#endif
