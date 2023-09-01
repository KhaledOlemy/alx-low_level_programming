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
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
