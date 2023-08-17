#include "main.h"
/**
 * print_triangle- this function prints triangles of size size
 * @size: this is the size of the triangle
 * Return: 0, always success
 */
void print_triangle(int size)
{
	if (size >= 1)
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
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
