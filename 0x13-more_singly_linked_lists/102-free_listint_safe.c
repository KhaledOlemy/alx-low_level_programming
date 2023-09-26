#include "lists.h"
/**
 * free_listint_safe - frees (safe version) singly linked list
 * and sets head to NULL after done
 * @h: head of the list
 *
 * Return: len of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t len = 0;
	int is_valid;

	if (!(*h))
	{
		return (0);
	}
	while ((*h)->next)
	{
		is_valid = (*h) - (*h)->next;
		len += 1;
		if (is_valid > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	free(*h);
	*h = NULL;
	return (len);
}
