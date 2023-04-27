#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the 1st node in the linked list 'head'.
 *
 * Return: the number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
