#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out opcodes of its own function
 * @argc: number of arguments opted in
 * @argv: actual arguments opted in
 * Return:	0 if everything is fine
 *		1 if wrong number of arguments entered
 *		2 if number entered is less than 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%2hx", array[i]);
		if (i != number_of_bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
			break;
		}
	}
	return (0);
}
