#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - understands the operator entered
 * and returns
 * @operation: operator entered to be translated to a function
 * Return: a struct of the operator entered,
 * and the actual function that does the work
 */
op_t get_op_func(char *operation)
{
	op_t out_strct;

	out_strct.op = operation;
	if (operation[0] == '+')
	{
		out_strct.f = op_add;
	}
	else if (operation[0] == '-')
	{
		out_strct.f = op_sub;
	}
	else if (operation[0] == '*')
	{
		out_strct.f = op_mul;
	}
	else if (operation[0] == '/')
	{
		out_strct.f = op_div;
	}
	else if (operation[0] == '%')
	{
		out_strct.f = op_mod;
	}
	else
	{
		out_strct.f = NULL;
	}
	return (out_strct);
}
