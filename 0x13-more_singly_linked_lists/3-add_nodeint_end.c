#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a singly linked lists
 * @head: head of the list
 * @n: int to be input as a value in the new node
 *
 * Return: new node's address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *item;

	item = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!item)
	{
		*head = new_node;
		item = new_node;
	}
	else
	{
		while (item->next)
		{
			item = item->next;
		}
		item->next = new_node;
	}
	return (new_node);
}
