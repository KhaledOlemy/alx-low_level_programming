#include "search_algos.h"
/**
 * binary_search - applying binary search algorithm
 * to search for a certain @value in @array.
 * @array: array to search for the value in.
 * @size: size of the array.
 * @value: value to search for.
 *
 * Return: index of the first occurence of value's
 * existence in the search array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int min, max, index;

	if (!array || !size || !value)
	{
		return (-1);
	}
	min = 0;
	max = (int) size - 1;
	index = splitter(array, min, max, value);
	return (index);

}

/**
 * splitter - worker function of divide&conquer approach
 *	splits the array in half and searches for the
 *	desired value.
 * @array: array to search for the value in.
 * @start: start index to start searching in the array.
 * @end: last index to search until in the array.
 * @value: value to search for.
 *
 * Return: index of the first occurence of value's
 * existence in the search array, or -1 if not found
 */
int splitter(int *array, int start, int end, int value)
{
	int mid, i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
		{
			printf("%d", array[i]);
		}
		else
		{
			printf("%d, ", array[i]);
		}
	}
	printf("\n");
	if (start == end)
	{
		if (array[start] == value)
		{
			return (start);
		}
		else
		{
			return (-1);
		}
	}
	mid = (start + end) / 2;
	if (value == array[mid])
	{
		return (mid);
	}
	else if (value > array[mid])
	{
		return (splitter(array, mid + 1, end, value));
	}
	else
	{
		return (splitter(array, start, mid - 1, value));
	}
}
