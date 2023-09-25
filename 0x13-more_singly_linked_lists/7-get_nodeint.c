#include "lists.h"
/**
 * get_nodeint_at_index - get node's address on a certain index
 * in a singly linked list
 * @head: head of the list
 * @index: index of the target node
 *
 * Return: node's address of the target
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int target = 0;

	node = head;
	while (node)
	{
		if (target == index)
		{
			return (node);
		}
		node = node->next;
		target += 1;
	}
	return (NULL);
}
