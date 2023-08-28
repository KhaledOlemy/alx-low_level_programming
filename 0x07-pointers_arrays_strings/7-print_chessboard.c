/**
 * print_chessboard- this function prints chessboard no spaces
 * @a: this is the pointer to the start of the chess table
 *
 */
#include "main.h"
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
