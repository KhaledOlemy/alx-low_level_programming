#include "main.h"
/**
 * get_bit - gets the value of a bit at an index
 * inside the binary version of number
 * @n: number to search in binarily
 * @index: index at which to check
 *
 * Return: 1, 0, the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (!n || (!index && index != 0))
	{
		return (-1);
	}
	return (1 && (n & (_pow_recursion(2, index))));
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
