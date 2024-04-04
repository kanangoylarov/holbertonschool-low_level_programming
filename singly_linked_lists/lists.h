#ifndef __FILE_NAME__
#define __FILE_NAME__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void premain();

typedef struct list_s *listPtr;

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
	void (*f)(void);
} list_t;



void free_list(list_t *);
list_t *add_node_end(list_t **, const char *);
list_t *add_node(list_t **, const char *);
size_t list_len(const list_t *);
size_t print_list(const list_t *);
listPtr lastNode(listPtr);

#endif
