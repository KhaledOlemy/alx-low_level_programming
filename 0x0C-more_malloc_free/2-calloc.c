#include <stdio.h>
#include <stdlib.h>

/**
 * _memset- this function sets the following n bytes with
 * char b
 * @s: this is the address of the start of the addressing
 * @b: this is the byte to be assigned to the addresses
 * @n: this is the count of addresses to be assigned to.
 * Return: the address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = s;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (ptr);
}

/**
 * _calloc- allocates space im memory for an array of (nmemb) items,
 * each of size (size) in bytes
 * @nmemb: number of items of the array.
 * @size: size of each item in the array.
 * Return: pointer to the array, if all good,
 * NULL if there's an error, or any attribute is set to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
