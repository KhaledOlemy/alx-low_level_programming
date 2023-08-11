#include <stdio.h>
/**
 * main- this prints numbers from 0 to 9 followed by /n
 *
 * Return: 0, always success
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
