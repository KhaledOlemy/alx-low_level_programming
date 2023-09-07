#include <stdlib.h>
/**
 * malloc_checked- allocates a space of memory for
 * different types of variables
 * @b: input memory size (in bytes)
 * Return: void pointer if there's space in memory
 * exits with status code of (98) if not.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
