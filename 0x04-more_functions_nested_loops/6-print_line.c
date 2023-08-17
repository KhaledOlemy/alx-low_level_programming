#include "main.h"
/**
 * print_line- this function prints a line of length n of underscores
 * @n: input number of underscores
 * Return: 0, always success
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
