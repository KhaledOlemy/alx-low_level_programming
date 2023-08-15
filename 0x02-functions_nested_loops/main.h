#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
void times_table(void)
{
	int x,y,temp,a,b;
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y == 0)
			{
				temp = 0;
				_putchar(temp+48);
				_putchar(',');
				_putchar(' ');
			}
			else if (y != 9)
			{
				temp = x * y;
				if (temp < 10)
				{
					_putchar(' ');
					_putchar(temp+48);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					a = temp / 10;
					b = temp % 10;
					_putchar(a+48);
					_putchar(b+48);
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				temp = x * y;
				if (temp < 10)
				{
					_putchar(' ');
					_putchar(temp+48);
				}
				else
				{
					a = temp / 10;
					b = temp % 10;
					_putchar(a+48);
					_putchar(b+48);
				}
			}
		}
		_putchar('\n');
	}
}
int add(int inp1, int inp2)
{
	int out = inp1 + inp2;
	return out;
}
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
		printf("%d", n);
		printf("\n");
	}
	else
	{
		for (n = n; n < 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
		printf("%d", n);
		printf("\n");
	}
}
void print_times_table(int n)
{
        int x,y,i,j,k,l,m;
        if (n > 15 || n < 0)
        {
                return;
        }
        n += 1;
        for (x = 0; x < n; x++)
        {
                for (y=0; y < n; y++)
                {
                        i = x * y;
                        if (y == 0)
                        {
                                _putchar(48);
                        }
                        else if (i >= 100)
                        {
                                j = i / 100;
                                k = i % 100;
                                l = k / 10;
                                m = k % 10;
                                _putchar(',');
                                _putchar(' ');
                                _putchar(j+48);
                                _putchar(l+48);
                                _putchar(m+48);

                        }
                        else if (i >= 10)
                        {
                                l = i / 10;
                                m = i % 10;
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(l+48);
                                _putchar(m+48);
                        }
                        else
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(i+48);
                        }

                }
                _putchar('\n');
        }
}
