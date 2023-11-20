#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the beginning of a doubly linked list
 * at the end
 * @head: head of the list.
 * @n: value to store at the new node.
 *
 * Return: new head pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *head_nav;

	head_nav = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (head_nav)
	{
		while (head_nav->next)
		{
			head_nav = head_nav->next;
		}
		head_nav->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = head_nav;
	return (new_node);
}
