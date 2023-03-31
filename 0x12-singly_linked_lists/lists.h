#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: lenght of the  string
* @next: points to the root node
*
*Description: singly linked list node structure
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif /*LINKED*/
