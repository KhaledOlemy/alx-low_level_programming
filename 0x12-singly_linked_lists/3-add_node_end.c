#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node at the end of a singly linked list
 * @head: head of the list
 * @str: string to be duplicated and be put as a string in the
 * new node
 *
 * Return: pointer to the new node made.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *item, *new;

	item = *head;
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = _strdup((char *)str);
	new->len = strlen((char *)str);
	new->next = NULL;
	if (!item)
	{
		*head = new;
		item = new;
	}
	else
	{
		while (item->next)
		{
			item = item->next;
		}
		item->next = new;
	}
	return (new);
}

/**
 * _strdup- copies a string to a new location using malloc
 * @str: string to be copied
 * Return: pointer to the new string.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	j += 1;
	ptr = malloc(j * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
