#include <stdio.h>
/**
 * main- this function will print lowercase alphabet without e and q
 *
 * Return: 0, always success
 */
int main(void)
{
	char s;

	s = 97;
	while (s < 123)
	{
		if (s != 101 && s != 113)
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
