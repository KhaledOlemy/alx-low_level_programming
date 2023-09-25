#include "lists.h"
/**
 * pop_listint - removes the head node, and assigns the head
 * to the second element of the singly linked list
 *
 * @head: head (first) item in the list
 *
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *node, *temp;
	int num;

	node = *head;
	num = node->n;
	temp = node->next;
	*head = temp;
	free(node);
	return (num);
}
