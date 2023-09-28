#include "main.h"
/**
 * print_binary - just calls other recursive function
 * to conver decimal to binary
 * @n: input decimal number to print in binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n&1)+'0');
}
