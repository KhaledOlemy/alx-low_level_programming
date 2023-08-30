#include "main.h"
/**
 * _print_rev_recursion- this function prints string in reverse
 * @s: pointer at the beginning of string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
