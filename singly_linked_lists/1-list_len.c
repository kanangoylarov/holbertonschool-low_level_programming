#include "lists.h"
#include <stddef.h>

/**
 * list_len - print size of linked list
 * @h: pointer to list (head)
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
