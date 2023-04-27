#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head of the linked list.
 * @str: the string to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] ; i++)
	{
		;
	}
	tmp = *head;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return (new_node);
}
