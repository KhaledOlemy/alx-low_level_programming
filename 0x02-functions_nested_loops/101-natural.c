#include <stdio.h>
/**
 * main- this prints numbers under 1024, that are divisible
 * by 3 or f
 *
 * Return: 0 Success
 */
int main(void)
{
	int sum = 0;
	int i, x, y;

	for (i = 0; i < 1024; i++)
	{
		x = i % 3;
		y = i % 5;
		if (x == 0 || y == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
