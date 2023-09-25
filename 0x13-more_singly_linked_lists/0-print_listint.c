#include "lists.h"
/**
 * print_listint - print linked list items and return the number of items
 * @h:singly linked list head.
 *
 * Return: number of items in a singly linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t out = 0;

	out = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		out += 1;
	}
	return (out);
}
