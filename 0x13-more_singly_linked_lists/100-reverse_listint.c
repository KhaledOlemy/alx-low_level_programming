#include "lists.h"
/**
 * reverse_listint - reverses a singly linked list
 * @head: head (first) node of the list.
 *
 * Return: head of the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *hold;

	temp = NULL;
	while ((*head)->next)
	{
		hold = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = hold;
	}
	(*head)->next = temp;
	return (*head);
}
