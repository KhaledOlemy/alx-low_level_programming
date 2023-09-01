/**
 * _memcpy- this function copies data from src area to dest area
 * @dest: this is the destination, data should be copied to.
 * @src: this is the source, data to copy from
 * @n: this is the number of bytes to be copied
 * Return: address of dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
