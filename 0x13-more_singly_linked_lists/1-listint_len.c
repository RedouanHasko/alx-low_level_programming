#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: the heade of the linked list.
 *
 * Return: the number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
