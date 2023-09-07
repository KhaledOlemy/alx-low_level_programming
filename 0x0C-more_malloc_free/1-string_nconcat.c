#include <stdlib.h>
#include <string.h>
/**
 * strfix- fixes if a string is null, put to ""
 * @s: string to fix.
 * Return: same string if not null, if null ""
 */
char *strfix(char *s)
{
	char *t;

	if (s == NULL)
	{t = ""; }
	else
	{t = s; }
	return (t);
}
/**
 * string_nconcat- concatenates two strings
 * @s1: first string (main)
 * @s2: second string to append bytes from
 * @n: number of bytes to append from s2 to s1
 * Return: pointer to the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, i, j;
	char *t1, *t2, *target;

	t1 = strfix(s1);
	l1 = strlen(t1);
	t2 = strfix(s2);
	l2 = strlen(t2);
	if ((int) n > l2)
	{
		n = (unsigned int) l2;
	}
	target = malloc(l1 + n + 1);
	if (target == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (t1[i] != '\0')
	{
		target[i] = t1[i];
		i++;
	}
	j = 0;
	while (j < (int) n)
	{
		target[i] = t2[j];
		i++;
		j++;
	}
	target[i] = '\0';
	return (target);
}
