#include "main.h"
/**
 * print_number- this function prints number without standard library
 * @n: this is the number to be printed
 * this is the first function I use recursion
 * Return: no return;
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + 48);
}
