#include <stdio.h>
/**
 * main- this function get the highest prime numbers of a 612852475143
 * Return: 0, always success
*/
int main(void)
{
	long int i, target, new;

	target = 612852475143;
	for (i = 2; i <= target; i++)
	{
		while (target % i == 0)
		{
			target /= i;
			new = i;
			printf("%lu", new);
			printf("\n");
		}
	}
	printf("---");
	printf("\n");
	printf("%lu", new);
	printf("\n");
	return (0);
}
