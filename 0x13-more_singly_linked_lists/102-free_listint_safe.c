#include "lists.h"

/**
 * find_listint_loop - frees a listint_t list.
 * @h: the pointer to the head of the linked list
 *
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h);
{
	listint_t *tmp;
	size_t len = 0;
	int f;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
