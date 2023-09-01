#include <stdio.h>
#include <stdlib.h>
/**
 * main-this function adds number together
 * @argc: number of arguments entered
 * @argv: actual arguments entered
 * Return: 0 if success, 1 if literal entered
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && *argv[i] != 48)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
