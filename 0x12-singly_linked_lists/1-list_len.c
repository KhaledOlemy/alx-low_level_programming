#include "lists.h"
/**
 * list_len - prints the length of a singly linked list
 * @h: actual singly linked list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
