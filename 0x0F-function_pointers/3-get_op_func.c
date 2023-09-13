#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - understands the operator entered
 * and returns
 * @operation: operator entered to be translated to a function
 * Return: pointer to the address of
 * the function that does the work
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
