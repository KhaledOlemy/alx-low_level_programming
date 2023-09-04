#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- this function should allocated a grid in memory
 * in form of 2-D array
 * @width: the width of the 2-D array
 * @height: the height of the 2-D array
 * Return: pointer to the start of the 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
