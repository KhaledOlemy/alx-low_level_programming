#include "main.h"
/**
 * set_bit - sets a bit at @index to 1
 * @n: number to alter
 * @index: index, at which to set to 1
 *
 * Return: altered number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!*n || (!index && index != 0) || index >= 64)
	{
		return (-1);
	}
	if (*n & _pow_recursion(2, index))
	{
		return (1);
	}
	*n += _pow_recursion(2, index);
	return (1);
}

/**
 * _pow_recursion- this function calculates x to the power of y
 * @x: the base number
 * @y: the exponent
 * Return: x to the power of y if y >= 0; else -1 to indicate error.
*/
int _pow_recursion(unsigned long int x, unsigned long int y)
{
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
