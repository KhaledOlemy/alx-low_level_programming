#include <stdio.h>
/**
 * main- this functions represents the FIZZ BUZZ problem
 * if a number is divisible by 3, replace it with Fizz
 * if a number is divisible by 5, replace it with Buzz
 * if a number is divisible by both 3 and 5, replace it with FizzBuzz
 * else: print the number itself
 * Return: 0, always success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
