#include "lists.h"
/**
 * print_list - function to print out an entire
 * singly linked list's content in a special fo
 * rmat.
 * @h: first node to print starting from
 *
 * Return: content of each node in the list
*/
size_t print_list(const list_t *h)
{
	int temp_len;
	size_t i = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			temp_len = 0;
			while (h->str[temp_len] != '\0')
			{
				temp_len++;
			}
			printf("[%d] %s\n", temp_len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
