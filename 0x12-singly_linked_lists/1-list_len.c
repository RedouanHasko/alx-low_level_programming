#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the first node in the linked list - head.
 *
 * Return: the number nodes.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
