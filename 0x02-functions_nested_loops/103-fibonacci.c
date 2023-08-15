# include <stdio.h>
/**
 * main - print first 50 fibonacci number
 *
 * Return: 0 - Success
*/
int main(void)
{
	long y, z, m;

	y = 1;
	z = 2;
	putchar(48 + 1);
	putchar(',');
	putchar(' ');
	while (z < 4000000)
	{
		printf("%lu", z);
		m = y;
		y = z;
		z += m;
		if (z >= 4000000)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
