/**
 * _strncpy- this function copies src into dest based on n (the number
 * of chars to be copied)
 * @dest: input string to be copied into
 * @src: input string to be copied from
 * @n: input number of character to copy
 * Return: copied dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
