#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- copies a string to a new location using malloc
 * @str: string to be copied
 * Return: pointer to the new string.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned long int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(str));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
