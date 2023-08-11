#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - get the last digit of a random number and print it on conditions
 *
 * Return: 0 (success isA)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",
		       n, last);
	}
	return (0);
}
