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
void typeit(char *value)
{
	int sizeval = strlen(value);
	int i;
	for (i = 0; i < sizeval; i++)
	{
		_putchar(value[i]);
	}
	_putchar('\n');
}
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
void print_alphabet_x10(void)
{
	int x;
	for (x = 0; x < 10; x++)
	{
		print_alphabet();
	}
}
