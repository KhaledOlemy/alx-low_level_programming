#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node in a singly linked list
 * at a certain index
 * @head: head of the list
 * @index: index at which to delete the node
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *holder, *item;
	unsigned int target = 0, len = 0;

	node = *head;
	if (!node)
	{return (-1); }
	while (node)
	{
		len += 1;
		node = node->next;
	}
	if (index > len - 1)
	{return (-1); }
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (index == target + 1)
		{
			item = node->next;
			holder = item->next;
			node->next = holder;
			free(item);
			return (1);
		}
		else
		{
			target += 1;
			node = node->next;
		}
	}
	return (-1);
}
