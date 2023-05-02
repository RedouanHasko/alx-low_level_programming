#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: the pointer to adress of the head node of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1 = NULL;
	listint_t *node2 = NULL;

	while (*head)
	{
		node2 = (*head)->next;
		(*head)->next = node1;
		node1 = *head;
		*head = node2;
	}
	*head = node1;
	return (*head);
}
