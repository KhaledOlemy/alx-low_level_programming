#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a doubly linked list
 * @head: head of the list.
 * @n: value to store at the new node.
 *
 * Return: new head pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if (*head)
	{
		while ((*head)->prev)
		{
			*head = (*head)->prev;
		}
	}
	new_node->next = *head;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
