# include <stdio.h>
/**
 * main - print first 50 fibonacci number
 *
 * Return: 0 - Success
*/
int main(void)
{
	long x, y, z, m;

	y = 1;
	z = 2;
	printf("%d", y);
	printf(',');
	printf(' ');
	for (x = 0; x < 49; x++)
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
