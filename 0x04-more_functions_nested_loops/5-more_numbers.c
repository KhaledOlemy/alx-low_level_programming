#include "main.h"
/**
 * more_numbers- this function prints numbers form 0 to 14
 * 10 times
 * Return: 0, always success
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j / 10;
			l = j % 10;
			if (k != 0)
			{
				_putchar(k + 48);
			}
			_putchar(l + 48);
		}
		_putchar('\n');
	}
}
