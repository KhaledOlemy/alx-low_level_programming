#include <string.h>
#include "main.h"
/**
 * _puts- this is just puts made manually
 * @str: this is the input string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
