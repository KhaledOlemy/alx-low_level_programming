#include <stdio.h>
/**
 * main- thisprints numbers from 0 to 9 separated by commas and spaces
 *
 * Return: 0, SUCCESS
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + 48);
		n++;
		if (n < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
