#include "main.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * printpos- this is inner function
 * @n: this is the number to be printed
 * Return: no return;
 */

void printpos(int n)
{
	int i, j, limit, temp;

	limit = pow(10, 9);
	for (i = limit; i >= 10;)
	{
		if (n >= i)
		{
			j = n / i;
			n = n % i;
			_putchar(j + 48);
			temp = i / 10;
			while (n < temp)
			{
				_putchar(0 + 48);
				temp /= 10;
				if (temp == 1)
				{
					break;
				}
			}
		}
		i /= 10;
	}
	n = n % 10;
	_putchar(n + 48);
}
/**
 * print_number- this function prints number without standard library
 * @n: this is the number to be printed
 * Return: no return; void
 */
void print_number(int n)
{
	if (n == 10 || n == -10)
	{
		if (n < 0)
		{
			_putchar('-');
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		else
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
	}
	else if (n > 0)
	{
		printpos(n);
	}
	else if (n == 0)
	{
		_putchar(n + 48);
	}
	else
	{
		_putchar('-');
		n = abs(n);
		printpos(n);
	}
}
