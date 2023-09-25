#include "lists.h"
/**
 * free_listint2 - free singly linked list and assign head to NULL
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *holder, *temp;

	if (!head)
	{
		free(head);
		head = NULL;
		return;
	}
	holder = *head;
	while (holder)
	{
		temp = holder->next;
		free(holder);
		holder = temp;
	}
	*head = NULL;
}
