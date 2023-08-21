#include <string.h>
#include "main.h"
/**
 * _strcpy- this function just behaves like strcpy
 * @dest: this is the destination for the string to be copied into
 * @src: this is the source string to be copied
 * Return: printed string of destination
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = strlen(src);
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
