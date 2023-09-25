#include "lists.h"
/**
 * listint_len - gets the length of a singly linked list
 * @h: head of the list
 *
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t out = 0;

	while (h)
	{
		out += 1;
		h = h->next;
	}
	return (out);
}
