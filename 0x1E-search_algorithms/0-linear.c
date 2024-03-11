#include "search_algos.h"
/**
 * linear_search- applying linear search algorithm to
 * search for an item in an array of integers.
 * @array: array to search in.
 * @size: size of the array searched.
 * @value: value to search for in the array.
 *
 * Return: index of the first occurence of value's
 * existence in the search array, or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !value || !size)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
