# include <stdio.h>
/**
 * main - print first 50 fibonacci number
 *
 * Return: 0 - Success
*/
int main(void)
{
	long y, z, m, out;

	y = 1;
	z = 2;
	while (z < 4000000)
	{
		m = y;
		y = z;
		z += m;
		if (z >= 4000000)
		{
			out = z;
			break;
		}
	}
	printf("%lu", out);
	putchar('\n');
	return (0);
}
