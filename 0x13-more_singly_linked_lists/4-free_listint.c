#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head)
	{
		new_node = head->next;
		free(head);
		head = new_node;
	}
}
