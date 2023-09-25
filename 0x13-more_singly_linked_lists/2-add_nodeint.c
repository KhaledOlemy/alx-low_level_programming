#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a singly linked list
 * @head: head of the list
 * @n: the value to be input in the new node
 *
 * Return: new head of the list after the node addition
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *holder;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	holder = *head;
	*head = new_node;
	new_node->next = holder;
	return (new_node);
}
