#include <stdio.h>
/**
 * array_iterator - prints array based on the style
 * of the action print style
 * @array: array to be printed
 * @size: size of the array
 * @action: pointer to print function to get the print style from.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
	{
		return;
	}
	int i;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
