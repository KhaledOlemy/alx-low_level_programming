# include <stdio.h>
/**
 * main - print first 50 fibonacci number
 *
 * Return: 0 - Success
*/
int main(void)
{
	long long x, y, z, m;

	y = 0;
	z = 1;
	for (x = 0; x < 50; x++)
	{
		printf("%lu", z);
		putchar(',');
		putchar(' ');
		m = y;
		y = z;
		z += m;
	}
	putchar('\n');
	return (0);
}
