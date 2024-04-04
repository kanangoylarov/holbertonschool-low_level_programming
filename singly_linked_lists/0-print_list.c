#include "lists.h"

/**
 * print_list - print simple linked list
 * @h: pointer to list (head)
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *node = h;

	/**
	* node->str = strdup(h->str);
	* node->len = h->len;
	* node->next = h->next;
	*/

	while (node)
	{
		if (node->str)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
		node = node->next;
		count++;
	}
	return (count);
}
