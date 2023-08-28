#include <stdio.h>
/**
 * print_diagsums- this function prints the sum of two diagonals
 * of a square 2-dimensional array
 * @a: this is the pointer to the start of the 2-D array
 * @size: this is the size of the 2-D array.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + (size * i) + j);
			}
			if (i == size - j - 1)
			{
				sum2 += *(a + (size * i) + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
