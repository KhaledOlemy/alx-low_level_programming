#include <stdio.h>
#include <stdlib.h>
/**
 * main- this function calculates minimum number of coins
 * to exchange for input
 * @argc: number of arguments entered
 * @argv: actual entered arguments
 * Return:	0 if only 1 argument entered
 *		1 if more than 1 argument entered
*/
int main(int argc, char *argv[])
{
	char *t;
	int count = 0, num, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		t = argv[1];
		for (j = 0; t[j] != '\0'; j++)
		{
			if (t[j] < '0' || t[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[1]);
		count += num / 25;
		num %= 25;
		count += num / 10;
		num %= 10;
		count += num / 5;
		num %= 5;
		count += num / 2;
		num %= 2;
		count += num / 1;
		num %= 1;
		printf("%d\n", count);
		return (0);
	}
}
