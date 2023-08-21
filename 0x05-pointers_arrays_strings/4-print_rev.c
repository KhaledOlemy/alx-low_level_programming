#include <string.h>
#include "main.h"
/**
 * print_rev- this function print the string in reverse
 * @s: this is the input string
 * void
 */
void print_rev(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
