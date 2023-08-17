#include "main.h"
/**
 * print_diagonal- this function prints a diagonal of len n
 * @n: length of diagonal
 * Return: 0, always success
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
