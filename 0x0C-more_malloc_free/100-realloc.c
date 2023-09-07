#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc- this function reallocates space in memory
 * @ptr: pointer to the previously allocated space
 * @old_size: old size of the allocated space
 * @new_size: new size of the allocated space pointed to by ptr
 * Return: pointer to the newly allocated space.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
