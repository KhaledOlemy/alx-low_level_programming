# include <stdio.h>
/**
 * main - this should print something complicated
 *
 * Return: 0, Success we hope
 */
int main(void)
{
	int i, j, x, y;
	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			x = i / 10;
			y = i % 10;
			putchar(x+48);
			putchar(y+48);
			putchar(' ');
			x = j / 10;
			y = j % 10;
			putchar(x+48);
			putchar(y+48);
			if (i == 98 && j == 99)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
