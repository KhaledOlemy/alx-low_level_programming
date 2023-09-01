#include "main.h"
/**
 * _puts- this is just puts made manually
 * @str: this is the input string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i, l;
	char *t = str;

	while (*t != '\0')
	{
		l += 1;
		t += 1;
	}
	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
