/**
 * _strncat- this function concatenates n chars from src to dest
 * @dest: this is the main string to be concatenated to.
 * @src: this is the string, to be concatenated from.
 * @n: this is the number of chars to be concatenated from @src.
 * Return: this is the output (dest) of the function.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
