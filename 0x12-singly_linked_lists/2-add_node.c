#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node at the beginning of a singly linked list
 * @head: current head for the singly linked list (0th item)
 * @str: string to be duplicated as a value for str in the new node
 *
 * Return: address of the new head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *temp_holder;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = _strdup((char *)str);
	new->len = strlen((char *)str);
	temp_holder = *head;
	*head = new;
	new->next = temp_holder;
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
