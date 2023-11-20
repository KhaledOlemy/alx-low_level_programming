#include "lists.h"
/**
 * dlistint_len - returns the number of items in a list
 * @h: head of the doubly linked list
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt += 1;
		h = h->next;
	}
	return (cnt);
}
