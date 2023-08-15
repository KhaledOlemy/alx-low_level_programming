#include <unistd.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c);
void print_alphabet(void)
{
	char s;

	s = 97;
	while (s < 123)
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
