#include "main.h"

/**
 * print_most_numbers- this function prints all numbers.
 * except for 2 and 4.
 * Return: 0, always success.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
