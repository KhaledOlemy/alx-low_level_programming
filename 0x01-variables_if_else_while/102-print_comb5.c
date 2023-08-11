# include <stdio.h>
/**
 * main - this should print something complicated
 *
 * Return: 0, Success we hope
*/
int main(void)
{
	int i, j, k, l;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (l = j + 1; l < 10; l++)
				{
					if (i == k && j == l)
					{
					}
					else
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(' ');
						putchar(k + 48);
						putchar(l + 48);
						if (i == 9 && j == 8)
						{
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
