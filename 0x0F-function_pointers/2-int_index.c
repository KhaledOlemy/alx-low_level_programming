/**
 * int_index - return index of the first match in
 * the array based on the cmp function provided
 * @array: array to search in
 * @size: size of the array
 * @cmp: validity function to search based on
 *
 * Return: index if matches, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
