#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index in a doubly linked list
 * @h: head pointer to the list.
 * @idx: index at which to insert node at
 * @n: value to hold inside new node.
 *
 * Return: pointer to the new node created.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *holder = *h;

	if (holder)
	{
		while (holder->prev)
		{holder = holder->prev; }
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
		{return (NULL); }
		new_node->n = n;
		new_node->next = holder;
		new_node->prev = NULL;
		if (holder)
		{holder->prev = new_node;}
		*h = new_node;
		return (new_node);
	}
	while (holder && (i != idx))
	{holder = holder->next;
		i++; }
	if (i == idx)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
		{return (NULL); }
		new_node->n = n;
		new_node->prev = holder->prev;
		new_node->next = holder;
		holder->prev->next = new_node;
		holder->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
