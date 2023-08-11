#include <stdio.h>
/**
 * main- this prints numbers from 0 to 9 followed by /n
 * with putchar only
 * Return: 0, always success
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x + 48);
		x++;
	}
	putchar('\n');
	return (0);
}
