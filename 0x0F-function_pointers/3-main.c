#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main program that calculates
 * basic arethmetics using argv opted in
 * @argc: input number of parameters
 * @argv: actual arguments entered to the program
 * Return:	0 if all is fine
 *		98 if number of arguments not right
 *		99 if wrong operator entered other than
 *		(+ || - || * || / || %)
 *		100 if you wish to divide/mod by 0
*/
int main(int argc, char *argv[])
{
	int x, y, out;
	op_t fun;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	fun = get_op_func(argv[2]);
	if (!fun.f)
	{
		exit(99);
	}
	out = fun.f(x, y);
	printf("%d", out);
	return (0);
}
