#include "main.h"

/**
 * is_palindrome- this is a function to determine if a string
 * is palindrome or not
 * @s: pointer to the beginning of the string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int x;

	x = str_len(s, 0);
	return (is_it_pali(s, x, 0));
}

/**
 * is_it_pali- this is a sub-function to determine if a string
 * is palindrome or not
 * @s: pointer to the beginning of the string
 * @len: length of a string
 * @index: point to check at which.
 * Return: 1 if palindrome, 0 if not
 */
int is_it_pali(char *s, int len, int index)
{
	if (index >= len / 2)
	{
		return (1);
	}
	if (*(s + index) != *(s + len - index - 1))
	{
		return (0);
	}
	return (is_it_pali(s, len, index + 1));
}

/**
 * str_len- this is a sub-function to calculate string length
 * @s: pointer to the beginning of the string
 * @l: initial length
 * Return: string length
 */

int str_len(char *s, int l)
{
	if (*s != '\0')
	{
		l += 1;
	}
	if (*s == '\0')
	{
		return (l);
	}
	return (str_len((s + 1), l));
}
