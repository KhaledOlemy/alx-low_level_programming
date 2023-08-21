#include <string.h>
#include "main.h"
/**
 * puts_half- this function prints the second half of a string
 * @str: this is the input string.
 * if the string length is odd, print second half of the string without
 * the center letter
 * void
 */
void puts_half(char *str)
{
	int l, n, i;

	l = strlen(str);
	n = (l + 1) / 2;
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
