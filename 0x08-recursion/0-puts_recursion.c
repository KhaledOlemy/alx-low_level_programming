#include "main.h"
/**
 * _puts_recursion- this function prints strings like puts
 * but we used recursion with putchar
 * @s: pointer to the start of the string
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
