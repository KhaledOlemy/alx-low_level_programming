#include "lists.h"
/**
 * sum_dlistint - sums all (n)s of a doubly linked list
 * @head: head of the list
 *
 * Return: sum of all (n)s
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
