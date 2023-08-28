/**
 * _strchr- this function searches of c inside string starting index s
 * @s: this is the first address to search in
 * @c: this is the character to search for
 * Return: the c if found, if not NULL.
*/
#include <stdio.h>
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
