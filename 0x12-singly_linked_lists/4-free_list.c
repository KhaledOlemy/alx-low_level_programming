#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees memory held by mallocs in a singly linked list
 * @head: points to head of the list
 *
*/
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
