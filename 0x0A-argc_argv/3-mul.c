#include <stdio.h>
#include <stdlib.h>
/**
 * main- this function multiplies 2 number
 * @argc: number of arguments entered
 * @argv: actual arguments eneterd
 * Return: 0 if success, 1 if not 2 number enetered
 * after file name
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
