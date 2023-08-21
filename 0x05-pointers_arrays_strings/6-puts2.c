#include <string.h>
#include "main.h"
/**
 * puts2- this function prints 0-mod-indexed items from a string
 * @str: this is the input string
 * void
 */
void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
