#include "main.h"
/**
 * flip_bits - calculates number of bits need to
 * flip to match the two input numbers
 * @n: input number #1
 * @m: input number #2
 *
 * Return: number of bit to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_binary((n ^ m), 0));
}

/**
 * count_binary - just calls other recursive function
 * to conver decimal to binary
 * @n: input decimal number to print in binary
 * @c: number of 1's in number to be used in
 * function recurively.
 *
 * Return: number of 1's in the number's binary version
 */
int count_binary(unsigned long int n, int c)
{
	int i = 0;

	if (n == 0 || n == 1)
	{
		i += 1;
		return ((int) n);
	}
	i += count_binary(n >> 1, i + c);
	if (n & 1)
	{
		i += 1;
	}
	return (i + c);
}
