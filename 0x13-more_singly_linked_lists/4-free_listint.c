#include "lists.h"
/**
 * free_listint - free singly linked list
 * @head: head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *holder;

	holder = head;
	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
