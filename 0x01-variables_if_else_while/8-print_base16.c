#include <stdio.h>
/**
 * main- this prints on the base of hexadecimals
 * from 0 to f
 * Return: 0, SUCCESS
 */
int main(void)
{
	char n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	n = 97;
	while (n < 103)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
