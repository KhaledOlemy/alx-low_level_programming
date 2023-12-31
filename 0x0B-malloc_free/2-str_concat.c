#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- concatenates 2 strings
 * @s1: first string at first.
 * @s2: second string to be appended
 * Return: pointer to the start of the new concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	k = i + j + 1;
	ptr = malloc(k);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < k && s1[l] != '\0'; l++)
	{
		ptr[l] = s1[l];
	}
	j = l;
	for (l = 0; l < k - j && s2[l] != '\0'; l++)
	{
		ptr[j + l] = s2[l];
	}
	ptr[j + l] = '\0';
	return (ptr);
}
