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
	int count = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
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
