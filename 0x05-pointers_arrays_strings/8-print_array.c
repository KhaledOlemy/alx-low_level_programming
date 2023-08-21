#include <stdio.h>
/**
 * print_array- this function prints the array's elements in their order
 * @a: this is the input array
 * @n: this is the length of the arry
 * void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
