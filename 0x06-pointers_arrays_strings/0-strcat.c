#include <string.h>
/**
 * _strcat- this function concatenates 2 strings
 * @dest: this is the test to be appended to
 * @src: this is the text to be appended.
 * Return: @src appended to @dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
