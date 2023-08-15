#include <unistd.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char *val);
void typeit(char *value)
{
	int sizeval = strlen(value);
	int i;
	_putchar(value*);
	_putchar('\n');
}
