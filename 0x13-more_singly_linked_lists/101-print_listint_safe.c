#include "lists.h"
/**
 * print_listint_safe - print safe version of a singly linked list
 * @head: head (first) node of the list
 *
 * Return: len of the singly linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *hold;
	size_t iter, len = 0;

	temp = head;
	while (temp)
	{
		len += 1;
		hold = head;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		iter = 0;
		while (iter < len)
		{
			if (temp == hold)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (len);
			}
			hold = hold->next;
			iter += 1;
		}
		if (head == NULL)
			exit(98);
	}
	return (len);
}
