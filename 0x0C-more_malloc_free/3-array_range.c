#include <stdio.h>
#include <stdlib.h>
/**
 * array_range- creates an array in memory with items ranging
 * from min to max, including both.
 * @min: minimum number in array (start)
 * @max: maximum number in array (end)
 * Return: pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *ptr, a, i;

	if (min > max)
	{
		return (NULL);
	}
	a = max - min + 1;
	ptr = malloc(a * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
