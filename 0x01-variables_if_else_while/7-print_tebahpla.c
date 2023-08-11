#include <stdio.h>
/**
 * main- this prints the lowercase alphabet in reverse order followed by \n
 *
 * Return: 0, Success
 */
int main(void)
{
	char s;

	s = 122;
	while (s > 96)
	{
		putchar(s);
		s--;
	}
	putchar('\n');
	return (0);
}
