#include <unistd.h>
#include <string.h>
#include <stdlib.h>

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
int _islower(char c)
{
	int out;
	int charint = (int) c;
	if (charint > 96 && charint < 123)
	{
		out = 1;
	}
	else
	{
		out = 0;
	}
	return out;
}
int _isalpha(int c)
{
	int out;
	int charint = (int) c;
	if ((charint > 96 && charint < 123) || (charint > 64 && charint < 91))
	{
		out = 1;
	}
	else
	{
		out = 0;
	}
	return out;
}
int print_sign(int n)
{
	int out;
	int charint = (int) n;
	if (charint > 0)
	{
		_putchar('+');
		out = 1;
	}
	else if (charint < 0)
	{
		_putchar('-');
		out = -1;
	}
	else
	{
		_putchar('0');
		out = 0;
	}
	return out;
}
int _abs(int inp)
{
	int out = abs(inp);
	return out;
}
int print_last_digit(int inp)
{
	int out;
	out = _abs(inp % 10);
	_putchar(out + 48);
	return out;
}
void jack_bauer(void)
{
	int hour, minute;
	int x, y;
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + 48);
			}
			else
			{
				x = hour / 10;
				y = hour % 10;
				_putchar(x+48);
				_putchar(y+48);
			}
			_putchar(':');
			if (minute < 10)
			{
				_putchar('0');
				_putchar(minute + 48);
			}
			else
			{
				x = minute / 10;
				y = minute % 10;
				_putchar(x+48);
				_putchar(y+48);
			}
			_putchar('\n');
		}
	}
}
