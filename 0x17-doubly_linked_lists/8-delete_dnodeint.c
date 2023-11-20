#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at a certain index from a
 * doubly linked list
 * @head: head of the list
 * @index: index at which to delete the node
 *
 * Return: 1 if successful, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *holder = *head, *temp;

	if (holder)
	{
		while (holder->prev)
		{holder = holder->prev; }
	}
	if (!holder)
	{return (-1); }
	if (!(holder && holder->next))
	{return (-1); }
	while (holder && i != index)
	{holder = holder->next;
		i++; }
	if (i == index)
	{
		if (i == 0 && holder->next)
		{holder = holder->next;
			free(*head);
			*head = holder;
			(*head)->prev = NULL;
		}
		else if (i == 0)
		{free(*head); }
		else if (holder->next == NULL)
		{
			temp = holder;
			free(temp);
			holder->prev->next = NULL;
		}
		else
		{
			holder->prev->next = holder->next;
			holder->next->prev = holder->prev;
			free(holder);
		}
		return (1);
	}
	return (-1);
}
