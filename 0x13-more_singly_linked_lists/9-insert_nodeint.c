#include "lists.h"
/**
 * insert_nodeint_at_index - adds a node at a certain index
 * in a singly linked list
 * @head: head of the list
 * @idx: index at which to insert node
 * @n: value to be input into new node
 *
 * Return: new node's address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp, *item;
	unsigned int target = 0, len = 0;

	item = *head;
	while (item)
	{
		len += 1;
		item = item->next;
	}
	if (idx > len)
	{return (NULL); }
	node = malloc(sizeof(listint_t));
	if (!node)
	{return (NULL); }
	node->n = n;
	if (idx == 0)
	{
		temp = *head;
		*head = node;
		node->next = temp;
		return (node);
	}
	else
	{
		item = *head;
		while (item)
		{
			if (target == idx - 1)
			{
				node->next = item->next;
				item->next = node;
				return (node);
			}
			target += 1;
			item = item->next;
		}
	}
	return (NULL);
}
