#include "lists.h"
/**
 * sum_listint - sums values of all nodes's values inside
 * a singly linked list
 * @head: head of the list;
 *
 * Return: sum of all nodes' values.
*/
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
