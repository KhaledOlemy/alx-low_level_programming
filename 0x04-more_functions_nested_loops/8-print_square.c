#include "main.h"
/**
 * print_square- this function prints a square of hashes based on size
 * @size: this attribute determines the square length
 * Return: 0, always success
 */
void print_square(int size)
{
	if (size >= 1)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
