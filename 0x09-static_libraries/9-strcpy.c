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
	char *t = src;
	
	length = 0;
	while (*t != '\0')
	{
		length += 1;
		t += 1;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
