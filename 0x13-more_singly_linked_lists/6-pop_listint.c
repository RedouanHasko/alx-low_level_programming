#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: the pointer to adress of head of the linked list.
 *
 * Return: zero if the linked list is empty.
 * or the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int number;

	if (*head == NULL)
	{
		return (0);
	}
	number = (*head)->n;
	new_node = *head;
	*head = (*head)->next;
	free(new_node);

	return (number);
}
