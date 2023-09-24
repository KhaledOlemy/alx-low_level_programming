#include "lists.h"
/**
 * print_list - function to print out an entire
 * singly linked list's content in a special fo
 * rmat.
 * @h: first node to print starting from
 *
 * Return: content of each node in the list
*/
size_t print_list(const list_t *h)
{
	int i = 0, temp_len;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_print_string("[0] (nil)\n");
		}
		else
		{
			temp_len = 0;
			while (h->str[temp_len] != '\0')
			{
				temp_len++;
			}
			_putchar('[');
			_print_int(temp_len, 1000000000, 0);
			_print_string("] ");
			_print_string(h->str);
			_putchar('\n');
		}
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * _print_string - rint strings
 * @s: input string to print
 *
 * Return: length of characters printed
 */
int _print_string(char *s)
{
	int i = 0;

	if (!s)
	{
		_print_string("(null)");
		return (6);
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * _print_int - print integers
 * @num: input decimal number to print
 * @iter: highest divisible number to convert decimal to split
 * the number into 1 digit value to print.
 * @flag: to tell the code, are we still overhead getting zeros (to neglect),
 * or are we in the number boundaries
 *
 * Return: length of characters printed
 */
int _print_int(unsigned int num, unsigned int iter, int flag)
{
	int i = 0;

	if (iter != 1)
	{
		iter /= 10;
		if (num / iter == 0 && flag == 0)
		{
			i += _print_int(num, iter, 0);
		}
		else
		{
			flag = 1;
			if (num / iter == 0)
			{
				i += 1;
				_putchar(0 + '0');
			}
			else
			{
				if ((num / iter) > 10)
				{
					i += 2;
					_putchar((num / iter) / 10 + '0');
					_putchar((num / iter) % 10 + '0');
				}
				else
				{
					i += 1;
					_putchar((num / iter) + '0');
				}
			}
			num %= iter;
			i += _print_int(num, iter, 1);
		}
	}
	return (i);
}
