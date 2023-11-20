#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *stepper = head;

	while (head)
	{
		stepper = head->next;
		free(head);
		head = stepper;
	}
}
