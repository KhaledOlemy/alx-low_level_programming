#include "lists.h"
/**
 * print_dlistint - prints doubly linked list
 * @h: head to the list
 *
 * Return: Number of items
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt += 1;
		h = h->next;
	}
	return (cnt);
}
