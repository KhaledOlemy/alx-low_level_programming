#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * Return: addition of @a & @b
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: subtraction of @a & @b
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: multiplication of @a & @b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 * Return: division of @a & @b, except if b == 0
 */
int op_div(int (a), int (b))
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}
/**
 * op_mod - gets mod of a / b
 * @a: first int
 * @b: second int
 * Return: modulo of @a & @b, except if b == 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
