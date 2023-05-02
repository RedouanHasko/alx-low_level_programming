#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of the linked list.
 * @head: the adress of the head node of the linked list.
 *
 * Return: if the list is empty, return 0 .
 * or returns the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
