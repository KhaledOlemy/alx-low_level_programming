#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at a certain index
 * @head: head of the doubly linked list
 * @index: index at which to retrieve the node.
 *
 * Return: node pointer desired.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *holder = head;

	while (holder && i != index)
	{
		holder = holder->next;
		i++;
	}
	if (i == index)
	{
		return (holder);
	}
	return (NULL);
}
