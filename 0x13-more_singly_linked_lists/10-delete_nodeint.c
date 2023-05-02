#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of linked list.
 * @head: the pointer to adress of the head of the linked list.
 * @index: is the index of the node that should be deleted,
 * Index starts at 0 .
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node1, *node2;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		node2 = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	node1 = *head;
	for (i = 0 ; i < index ; i++)
	{
		if (node1->next == NULL)
		{
			return (-1);
		}
		node1 = node1->next;
	}
	node2 = node1->next;
	node1->next = node2->next;
	free(node2);
	return (1);
}
