#include <string.h>
/**
 * _strncat- this function concatenates n chars from src to dest
 * @dest: this is the main string to be concatenated to.
 * @src: this is the string, to be concatenated from.
 * @n: this is the number of chars to be concatenated from @src.
 * Return: this is the output (dest) of the function.
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
