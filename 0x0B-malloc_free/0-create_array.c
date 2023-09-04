#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- creates an array using malloc with size of size
 * and each byte initialized to char c
 * @size: size of the memory to be allocated
 * @c: char to be initialized to each element of the array
 * Return: pointer to the start of the memory allocated
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
